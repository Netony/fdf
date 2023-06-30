/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:19:27 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/30 11:40:30 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "matrix.h"

int	fdf_hook(t_vars	*vars);

int	main(void)
{
	const int	mx[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	const int	**cpmx;
	int				i;
	int				j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%p ", mx[i]);
			j++;
		}
		printf("\n");
		i++;
	}
	cpmx = mx;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%p ", cpmx[i]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}

int	fdf_hook(t_vars	*vars)
{
	hook_close(vars);
	return (0);
}
