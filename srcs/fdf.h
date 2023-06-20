/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:21:47 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/20 22:12:16 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libft/incs/libft.h"
# include <mlx.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <fcntl.h>

typedef struct	s_vec
{
	int	x;
	int	y;
}	t_vec;

typedef struct	s_cood
{
	int	x;
	int	y;
	int	z;
	int	c;
}	t_cood;

void	ft_line_put(void *mlx_ptr, void *win_ptr, t_vec *a, t_vec *b, int color);

int		trgb_to_color(int *trgb);
int		*color_to_trgb(int color);
int		color_iofn(int a, int b, int i, int n);

t_vec	*vec_init(int x, int y);
t_vec	*vec_add(t_vec *a, t_vec *b);
t_vec	*vec_sub(t_vec *a, t_vec *b);
t_vec	*vec_rotate(t_vec *a, int x, int y, int z);

t_cood	*cood_new(int x, int y, int z, int color);
t_cood	*cood_iofn(t_cood *dst, t_cood *a, t_cood *b, int i, int n);

int		**cood_to_matrix(t_cood *cood);

void	put_cood(void *mlx_ptr, void *win_ptr, t_cood *cood);
void	put_line(void *mlx_ptr, void *win_ptr, t_cood *a, t_cood *b);

int		**matrix_times(int **a, int **b, int a_size[2], int b_size[2]);
int		**matrix_new(int *a, int x_size, int y_size);
void	matrix_del(int **a, int x_size);

int		print_matrix(int **a, int x_size, int y_size);

int		ft_abs(int a);
int		get_larger(int x, int y);
int		iofn(int a, int b, int i, int n);

#endif
