/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:19:27 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/29 08:31:41 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	fdf_hook(t_vars	*vars);

int	main(void)
{
	// t_vars	vars;
	t_dot	*dot;
	int		*arr;
	int		**mx;
	int		*size;

	arr = ft_arrnew(9, 1, 2, 3, 4, 5, 6, 7, 8, 9);
	mx = ft_mxnew(arr, 3, 3);
	ft_putmx(mx, 3, 3);
	dot = ft_dotnew(1, 2, 3, 10);
	ft_putmx(dot->mx, 3, 1);
	size = ft_arrnew(4, 3, 3, 3, 1);
	ft_putmx(ft_mxmul(mx, dot->mx, size), 3, 1);
	return (0);
}

int	fdf_hook(t_vars	*vars)
{
	hook_close(vars);
	return (0);
}
