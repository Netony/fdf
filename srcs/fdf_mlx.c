/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_mlx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:29:19 by dajeon            #+#    #+#             */
/*   Updated: 2023/05/30 22:34:45 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_line_put(void *mlx_ptr, void *win_ptr, t_vec *a, t_vec *b, int color)
{
	int	x;
	int	y;
	int	t;
	int	size;

	if (ft_abs(a->x - b->x) > ft_abs(a->y - b->y))
		size = ft_abs(a->x - b->x);
	else
		size = ft_abs(a->y - b->y);
	t = 0;
	while (t < size)
	{
		x = a->x + (b->x - a->x) * t / size;
		y = a->y + (b->y - a->y) * t / size;
		mlx_pixel_put(mlx_ptr, win_ptr, x, y, color);
		t++;
	}
}
