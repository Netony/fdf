/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:21:47 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 18:59:14 by dajeon           ###   ########.fr       */
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

typedef struct	s_vars
{
	void	*mlx;
	void	*win;
}	t_vars;

typedef struct	s_cood
{
	int	x;
	int	y;
	int	z;
	int	c;
}	t_cood;

int		trgb_to_color(int *trgb);
int		*color_to_trgb(int color);
int		color_iofn(int a, int b, int i, int n);

t_cood	*cood_new(int x, int y, int z, int color);
t_cood	*cood_iofn(t_cood *a, t_cood *b, int i, int n);

int		**cood_to_matrix(t_cood *cood);

void	mlx_put_cood(void *mlx_ptr, void *win_ptr, t_cood *cood);
void	mlx_put_line(void *mlx_ptr, void *win_ptr, t_cood *a, t_cood *b);

int		**matrix_new(int *a, int x_size, int y_size);
void	matrix_del(int **a, int x_size);
int		**matrix_times(int **a, int **b, int *sizes);
int		*matrix_make_sizes(int a_row, int a_col, int b_row, int b_col);

int		abs(int n);

int		print_matrix(int **a, int x_size, int y_size);

int		larger(int x, int y);
int		iofn(int a, int b, int i, int n);
int		abs(int n);

void	fdf_putmap(t_vars *vars, t_cood ***set, int row, int col);

t_cood	***list_to_cood(t_cood ***dst, t_list *lst, int row, int col);
void	ft_sptndel(char **split, int n);
void	ft_sptdel(char **split);
int		ft_sptsize(char **split);

void	cood_setdel(t_cood ***set, int row, int col, int ccol);
void	cood_rowdel(t_cood **row, int col);
t_cood	***cood_setnew(int row, int col);

#endif
