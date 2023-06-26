/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:08:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 12:13:26 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	print_matrix(int **matrix, int x_size, int y_size)
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
