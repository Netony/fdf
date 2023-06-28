/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:08:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/28 21:34:35 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fdf.h"

int	ft_putmx(int **mx, int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			ft_putnbr_fd(mx[i][j++], 1);
			ft_putstr_fd(" ", 1);
		}
		ft_putendl_fd("", 1);
		i++;
	}
	return (0);
}

int	ft_putarr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putnbr_fd(arr[i++], 1);
		ft_putstr_fd(" ", 1);
	}
	ft_putendl_fd("", 1);
	return (0);
}
