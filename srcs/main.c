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
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	t_cood	***cood;

	fd = fdf_check_arg(argc, argv);
	if (fd < 0)
		return (1);
	cood = fdf_check_file(fd);
	if (cood == NULL)
		return (1);
	
	return (0);
}

int	fdf_check(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		ft_perror_arg("fdf", argc - 1, 1);
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("fdf");
		return (-1);
	}
	return (fd);
}

int	ft_test(void)
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
