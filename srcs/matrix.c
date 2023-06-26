/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:04:41 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 12:15:09 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**matrix_new(int *nbrs, int x_size, int y_size)
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

void	matrix_del(int **matrix, int x_size)
{
	int	i;

	i = 0;
	while (i < x_size)
		free(matrix[i++]);
	free(matrix);
}

int	**matrix_times(int **a, int **b, int *sizes);
{
	int	i;
	int	j;
	int	k;
	int	**ret;

	ret = (int **)malloc(sizeof(int *) * a_size[0]);
	i = 0;
	while (i < sizes[0])
	{
		ret[i] = (int *)malloc(sizeof(int) * b_size[1]);
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

int	*matrix_make_sizes(int a_row, int a_col, int b_row, int b_col)
{
	int	*size;

	size = (int *)malloc(sizeof(int) * 4);
	if (size == NULL)
		return (NULL);
	size[0] = a_row;
	size[1] = a_col;
	size[2] = b_row;
	size[3] = b_col;
	return (size);
}
