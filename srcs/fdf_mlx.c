/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_mlx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:29:19 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/20 20:55:29 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	fdf_line_row(t_cood ***set, int m, int n);
static void	fdf_line_col(t_cood ***set, int m, int n);

void	put_cood(void *mlx_ptr, void *win_ptr, t_cood *cood)
{
	mlx_pixel_put(mlx_ptr, win_ptr, cood->x, cood->y, cood->c);
}

void	put_line(void *mlx_ptr, void *win_ptr, t_cood *a, t_cood *b)
{
	int		i;
	int		n;
	t_cood	*cur;

	cur = (t_cood *)malloc(sizeof(t_cood));
	n = get_larger(a->x - b->x, a->y - b->y);
	i = 0;
	while (i < n)
	{
		cur = cood_iofn(cur, a, b, i, n);
		put_cood(mlx_ptr, win_ptr, cur);
		i++;
	}
	free(cur);
}

int	fdf_putmap(t_cood ***set, int m, int n)
{
	fdf_line_col(set, m, n);
	fdf_line_row(set, m, n);
}

static void	fdf_line_col(t_cood ***set, int m, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < m - 1)
	{
		j = 0;
		while (j < n)
		{
			put_line(set[i][j], set[i + 1][j]);
			j++;
		}
		i++;
	}
}

static void	fdf_line_row(t_cood ***set, int m, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < m)
	{
		j = 0;
		while (j < n - 1)
		{
			put_line(set[i][j], set[i][j + 1]);
			j++;
		}
		i++;
	}
}
