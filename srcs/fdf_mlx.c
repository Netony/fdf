/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_mlx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:29:19 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 13:05:34 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <mlx.h>

void	mlx_put_cood(void *mlx_ptr, void *win_ptr, t_cood *cood)
{
	mlx_pixel_put(mlx_ptr, win_ptr, cood->x, cood->y, cood->c);
}

void	mlx_put_line(void *mlx_ptr, void *win_ptr, t_cood *a, t_cood *b)
{
	int		i;
	int		n;
	t_cood	*cur;

	n = abs(larger(a->x - b->x, a->y - b->y));
	i = 0;
	while (i < n)
	{
		cur = cood_iofn(a, b, i, n);
		mlx_put_cood(mlx_ptr, win_ptr, cur);
		i++;
	}
}
