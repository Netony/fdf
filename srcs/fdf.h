/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:21:47 by dajeon            #+#    #+#             */
/*   Updated: 2023/05/31 20:06:18 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H

# include <mlx.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

typedef struct	s_vec
{
	int	x;
	int	y;
}	t_vec;

void	ft_line_put(void *mlx_ptr, void *win_ptr, t_vec *a, t_vec *b, int color);

int		ft_rgb_to_color(int t, int r, int g, int b);
int		*ft_color_to_rgb(int color);

t_vec	*vec_init(int x, int y);
t_vec	*vec_add(t_vec *a, t_vec *b);
t_vec	*vec_sub(t_vec *a, t_vec *b);
t_vec	*vec_rotate(t_vec *a, int x, int y, int z);

int		ft_abs(int a);
#endif
