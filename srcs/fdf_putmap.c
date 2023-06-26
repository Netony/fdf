/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_view_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:52:29 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 12:45:09 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	fdf_putmap_row(t_mlx *mlx, t_cood ***set, int m, int n);
static void	fdf_putmap_col(t_mlx *mlx, t_cood ***set, int m, int n);

void	fdf_putmap(t_mlx *mlx, t_cood ***set, int row, int col)
{
	fdf_putmap_row(mlx, set, row, col);
	fdf_putmap_col(mlx, set, row, col);
}

static void	fdf_putmap_row(t_mlx *mlx, t_cood ***set, int m, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < m)
	{
		j = 0;
		while (j < n - 1)
		{
			mlx_put_line(mlx->mlx, mlx->win, set[i][j], set[i][j + 1]);
			j++;
		}
		i++;
	}
}

static void	fdf_putmap_col(t_mlx *mlx, t_cood ***set, int m, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < m - 1)
	{
		j = 0;
		while (j < n)
		{
			mlx_put_line(mlx->mlx, mlx->win, set[i][j], set[i + 1][j]);
			j++;
		}
		i++;
	}
}
