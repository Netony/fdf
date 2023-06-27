/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:17:11 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/27 20:21:54 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	close_keypress(int keycode, t_vars *vars);
static int	close_button(void);

int	hook_close(t_vars *vars)
{
	mlx_hook(vars->win, 2, 0, close_keypress, vars);
	mlx_hook(vars->win, 17, 0, close_button, vars);
	return (0);
}

static int	close_keypress(int keycode, t_vars *vars)
{
	if (keycode == 53)
		mlx_destroy_window(vars->mlx, vars->win);
	exit(0);
	return (0);
}

static int	close_button(void)
{
	exit(0);
	return (0);
}
