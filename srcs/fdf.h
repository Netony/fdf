/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:21:47 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/19 21:05:02 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H

# include "../libft/incs/libft.h"
# include <mlx.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

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
	int	color;
}	t_cood;

void	ft_line_put(void *mlx_ptr, void *win_ptr, t_vec *a, t_vec *b, int color);

int		ft_rgb_to_color(int t, int r, int g, int b);
int		*ft_color_to_rgb(int color);

t_vec	*vec_init(int x, int y);
t_vec	*vec_add(t_vec *a, t_vec *b);
t_vec	*vec_sub(t_vec *a, t_vec *b);
t_vec	*vec_rotate(t_vec *a, int x, int y, int z);

int		ft_abs(int a);
int		**matrix_times(int **a, int **b, int a_size[2], int b_size[2]);
int		**matrix_new(int *a, int x_size, int y_size);
void	matrix_del(int *a, int x_size);
int		print_matrix(int **a, int x_size, int y_size);

#endif
