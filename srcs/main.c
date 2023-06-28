/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:19:27 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/28 21:34:37 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	fdf_hook(t_vars	*vars);

int	main(void)
{
	t_vars	vars;
	int		*arr;
	int		**mx;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1200, 800, "TEST");
	arr = ft_arrnew(5, 1, 2, 3, 5, 6);
	ft_putarr(arr, 5);
	mx = ft_atom(arr);
	ft_putmx(mx, 1, 5);
	fdf_hook(&vars);
	mlx_loop(vars.mlx);
	return (0);
}

int	fdf_hook(t_vars	*vars)
{
	hook_close(vars);
	//hook_rotate(vars);
	return (0);
}
