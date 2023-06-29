/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:04:41 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/29 08:39:57 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft/incs/libft.h"
#include "matrix.h"

int	**ft_mxnew(int *nbrs, int row, int col)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = (int **)malloc(sizeof(int *) * row);
	if (matrix == NULL)
		return (NULL);
	i = 0;
	while (i < row)
	{
		matrix[i] = (int *)malloc(sizeof(int) * col);
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

int	**ft_mxzero(int row, int col)
{
	int	*zeros;
	int	**mx;

	zeros = (int *)ft_calloc(row * col, sizeof(int));
	if (zeros == NULL)
		return (NULL);
	mx = ft_mxnew(zeros, row, col);
	free(zeros);
	return (mx);
}

void	ft_mxdel(int **matrix, int row)
{
	int	i;

	i = 0;
	while (i < row)
		free(matrix[i++]);
	free(matrix);
}

int	**ft_mxmul(int **a, int **b, int *sizes)
{
	int	i;
	int	j;
	int	k;
	int	temp;
	int	**ret;

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
