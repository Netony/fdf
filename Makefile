# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 09:00:32 by dajeon            #+#    #+#              #
#    Updated: 2023/06/30 19:07:12 by dajeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SOURCES = # dot.c matrix.c hook.c array.c print.c color.c iofn.c
#SOURCES = fdf_mlx.c fdf_math.c fdf_utils.c fdf_putmap.c fdf_coordinate.c \
		  iofn.c free.c# fdf_parser.c 
SOURCES_MANDA = test.c # main.c
SOURCES_BONUS =
			   
INCLUDES = fdf.h

LIBFT = libft.a
LIB = ft 

# **************************************************************************** #

LIB_DIR = libft
SRC_DIR = srcs
OBJ_DIR = objs
INC_DIR = srcs

SRCS := $(addprefix $(SRC_DIR)/, $(SOURCES))
SRCS_MANDA := $(addprefix $(SRC_DIR)/, $(SOURCES_MANDA))
SRCS_BONUS := $(addprefix $(SRC_DIR)/, $(SOURCES_BONUS))

OBJS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))
OBJS_MANDA = $(addprefix $(OBJ_DIR)/, $(SOURCES_MANDA:.c=.o))
OBJS_BONUS = $(addprefix $(OBJ_DIR)/, $(SOURCES_BONUS:.c=.o))

INCS := $(addprefix $(INC_DIR)/, $(INCLUDES))
LIBFT := $(addprefix $(LIB_DIR)/, $(LIBFT))

ifdef WITH_BONUS
	OBJS_NEW = $(OBJS_BONUS) $(OBJS) 
else
	OBJS_NEW = $(OBJS_MANDA) $(OBJS) 
endif

# **************************************************************************** #

MAKE = make
CC = gcc
AR = ar
RM = rm

CFLAGS = #-Wall -Wextra -Werror
# LIBFLAGS = -lm -L. -lmlx -framework OpenGl -framework AppKit -l$(LIB) -L$(LIB_DIR)
# LIBFLAGS = -lm -lmlx -framework OpenGl -framework AppKit -l$(LIB) -L$(LIB_DIR)
LIBFLAGS = -l$(LIB) -L$(LIB_DIR)

ARFLAGS = crus
RMFLAGS = -rf

# Commands ******************************************************************* #

all : 
	$(RM) $(RMFLAGS) $(OBJS_BONUS)
	$(MAKE) $(NAME) 

bonus : 
	$(RM) $(RMFLAGS) $(OBJS_MANDA)
	$(MAKE) $(NAME) WITH_BONUS=1

clean :
	$(RM) $(RMFLAGS) objs */*.a */*.o */*/*.o

fclean : 
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)

re : 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all bonus clean fclean re

# Dependency ***************************************************************** #

$(NAME) : $(OBJS_NEW) $(LIBFT) $(LIBFTPRINTF) $(LIBGNL)
	$(CC) $(CFLAGS) $(OBJS_NEW) -I $(INC_DIR) -o $(NAME) $(LIBFLAGS)

$(LIBFT): 
	$(MAKE) -j3 -C $(LIB_DIR) all

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $< -c -I $(SRC_DIR) -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

