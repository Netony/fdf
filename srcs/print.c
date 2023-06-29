/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:08:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/29 11:41:03 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fdf.h"

int	ft_putmx(double **mx, int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
			printf("%.2f ", mx[i][j++]);
		printf("\n");
		i++;
	}
	printf("\n");
	return (0);
}

int	ft_putarr_db(double *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
		printf("%f\n", arr[i]);
	ft_putendl_fd("", 1);
	return (0);
}

int	ft_putarr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
		printf("%d\n", arr[i]);
	ft_putendl_fd("", 1);
	return (0);
}
