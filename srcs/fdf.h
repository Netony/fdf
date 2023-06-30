/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:21:47 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/29 13:48:35 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libft/incs/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <fcntl.h>
# include "../mlx/mlx.h"// local
// # include <mlx.h>// 42

typedef struct s_vars
{
	void	*mlx;
	void	*win;
}	t_vars;

typedef struct s_dot
{
	double	**mx;
	int		color;
}	t_dot;

// ARRAY(INT *)
double	**ft_atom(double *arr, int size);
double	*ft_arrnew_db(int n, ...);
int		*ft_arrnew(int n, ...);

// HOOK
int		hook_close(t_vars *vars);

// COLOR
int		trgb_to_color(int *trgb);
int		*color_to_trgb(int color);
int		color_iofn(int a, int b, int i, int n);
int		color_height(int z);

// DOT

t_dot	*ft_dotnew(double x, double y, double z, int height);
void	ft_dotdel(t_dot *dot);
t_dot	*ft_dot_iofn(t_dot *a, t_dot *b, int i, int n);

// MATH
int		abs(int n);
int		larger(int x, int y);
int		iofn(int a, int b, int i, int n);

// TEST
int		ft_putmx(double **mx, int row, int col);
int		ft_putarr(int *arr, int n);
int		ft_putarr_db(double *arr, int n);

// FDF
void	fdf_putmap(t_vars *vars, t_dot ***set, int row, int col);
void	mlx_put_dot(void *mlx_ptr, void *win_ptr, t_dot *dot);
void	mlx_put_line(void *mlx_ptr, void *win_ptr, t_dot *a, t_dot *b);

// SPLIT(CHAR **) ...
t_dot	***list_to_dot(t_dot ***dst, t_list *lst, int row, int col);
void	ft_sptndel(char **split, int n);
void	ft_sptdel(char **split);
int		ft_sptsize(char **split);

// SET(T_DOT ***) ...
void	dot_setdel(t_dot ***set, int row, int col, int ccol);
void	dot_rowdel(t_dot **row, int col);
t_dot	***dot_setnew(int row, int col);

#endif
