/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_math.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:28:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/20 22:18:04 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}

void	matrix_del(int **a, int x_size)
{
	int	i;

	i = 0;
	while (i < x_size)
		free(a[i++]);
}

int	**matrix_new(int *a, int x_size, int y_size)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = (int **)malloc(sizeof(int *) * x_size);
	i = 0;
	while (i < x_size)
	{
		matrix[i] = (int *)malloc(sizeof(int) * y_size);
		j = 0;
		while (j < y_size)
			matrix[i][j++] = *(a++);
		i++;
	}
	return (matrix);
}


int	**matrix_times(int **a, int **b, int a_size[2], int b_size[2])
{
	int	i;
	int	j;
	int	k;
	int	**ret;

	ret = (int **)malloc(sizeof(int *) * a_size[0]);
	i = 0;
	while (i < a_size[0])
	{
		ret[i] = (int *)malloc(sizeof(int) * b_size[1]);
		j = 0;
		while (j < b_size[1])
		{
			k = 0;
			while (k < a_size[1])
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

int	print_matrix(int **a, int x_size, int y_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < x_size)
	{
		j = 0;
		while (j < y_size)
			printf("%d ", a[i][j++]);
		printf("\n");
		i++;
	}
	return (0);
}

int	iofn(int a, int b, int i, int n)
{
	int	x;

	x = a + (b - a) * (i / n);
	return (x);
}

int	get_larger(int x, int y)
{
	if (abs(x) >= abs(y))
		return (x);
	else
		return (y);
}
