/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:19:27 by dajeon            #+#    #+#             */
/*   Updated: 2023/05/30 22:31:04 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(void)
{
	void	*mlx;
	void	*win;
	t_vec	*a;
	t_vec	*b;
	int		i;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 1000, "TEST");
	i = 0;
	a = vec_init(100, 350);
	b = vec_init(900, 950);
	ft_line_put(mlx, win, a, b, ft_rgb_to_color(0, 0, 255, 0));
	mlx_loop(mlx);
	return (0);
}
