/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:04:41 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/28 21:17:02 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_mxnew(int *nbrs, int row, int col)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = (int **)malloc(sizeof(int *) * row);
	i = 0;
	while (i < row)
	{
		matrix[i] = (int *)malloc(sizeof(int) * col);
		j = 0;
		while (j < col)
			matrix[i][j++] = *(a++);
		i++;
	}
	return (matrix);
}

void	ft_mxdel(int **matrix, int row)
{
	int	i;

	i = 0;
	while (i < row)
		free(matrix[i++]);
	free(matrix);
}

int	**ft_mxmul(int **a, int **b, int *sizes);
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
