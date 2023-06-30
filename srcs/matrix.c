/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:04:41 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/30 14:40:17 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft/incs/libft.h"
#include "matrix.h"

double	**ft_mxnew(const double *nbrs, int row, int col)
{
	double	**matrix;
	int	i;
	int	j;

	matrix = (double **)malloc(sizeof(double *) * row);
	if (matrix == NULL)
		return (NULL);
	i = 0;
	while (i < row)
	{
		matrix[i] = (double *)malloc(sizeof(double) * col);
		if (matrix[i] == NULL)
		{
			ft_mxdel(matrix, i);
			return (NULL);
		}
		j = 0;
		while (j < col)
			matrix[i][j++] = *(nbrs++);
		i++;
	}
	return (matrix);
}

double	**ft_mxzero(int row, int col)
{
	double	*zeros;
	double	**mx;

	zeros = (double *)ft_calloc(row * col, sizeof(double));
	if (zeros == NULL)
		return (NULL);
	mx = ft_mxnew(zeros, row, col);
	free(zeros);
	return (mx);
}

void	ft_mxdel(double **matrix, int row)
{
	int	i;

	i = 0;
	while (i < row)
		free(matrix[i++]);
	free(matrix);
}

double	**ft_mxmul(const double **a, const double **b, int *sizes)
{
	int	i;
	int	j;
	int	k;
	double	**ret;

	ret = ft_mxzero(sizes[0], sizes[3]);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < sizes[0])
	{
		j = 0;
		while (j < sizes[3])
		{
			k = 0;
			while (k < sizes[2])
			{
				ret[i][j] += a[i][k] * b[k][j];
				k++;
			}
			j++;
		}
		i++;
	}
	return (ret);
}
