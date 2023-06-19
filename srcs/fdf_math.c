/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_math.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:28:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/18 15:57:53 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}

int	**ft_matrix_mul(int **a, int **b, int a[3])
{
	int	i;
	int	j;
	int	k;
	int	**ret;

	ret = (int **)ft_calloc(sizeof(int), a[0] * a[3]);
	i = 0;
	while (i < a[3])
	{
		j = 0;
		while (j < a[2])
		{
			k = 0;
			while (k < a[3])
				a[i][j] += 
		}
	}
}
