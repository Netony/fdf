/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:19:27 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 13:05:32 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
/*
int	main(void)
{
	int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	int	**test1;
	int	**test2;
	int	**test3;
	int	a_size[2] = {2, 4};
	int	b_size[2] = {4, 2};

	test1 = matrix_new(a, 2, 4);
	test2 = matrix_new(a, 4, 2);
	print_matrix(test1, 2, 4);
	print_matrix(test2, 4, 2);
	test3 = matrix_times(test1, test2, a_size, b_size);
	print_matrix(test3, 2, 2);
	return (0);
}

void	test(int *pa)
{
	int	i;
	
	i = 0;
	while (i < 9)
	{
		printf("pa[%d]: %d\n", i, pa[i]);
		i++;
	}
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


void	test_pb(int **pb, int x, int y)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			printf("pb[%d][%d]: %d\n", i, j, pb[i][j]);
			j++;
		}
		i++;
	}
}

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
*/

int	main(void)
{
	t_mlx	fdf;
	t_cood	***a;
	int		i;
	int		j;

	a = (t_cood ***)malloc(sizeof(t_cood **) * 20);
	i = 0;
	while (i < 20)
	{
		j = 0;
		a[i] = (t_cood **)malloc(sizeof(t_cood *) * 30);
		while (j < 30)
		{
			a[i][j] = (t_cood *)malloc(sizeof(t_cood));
			a[i][j]->x = iofn(200, 900, j, 20);
			a[i][j]->y = iofn(300, 600, i, 30);
			a[i][j]->z = 0;
			a[i][j]->c = color_iofn(0x00FF0000, 0x0000FFFF, i * 30 + j , 600);
			j++;
		}
		i++;
	}
	i = 0;
	fdf.mlx = mlx_init();
	fdf.win = mlx_new_window(fdf.mlx, 1000, 1000, "TEST");
	fdf_putmap(&fdf, a, 20, 30);
	mlx_loop(fdf.mlx);
	return (0);
}
/*
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < m)
	{
		j = 0;
		a[i] = (t_cood **)malloc(sizeof(t_cood *) * n);
		if (a[i] == NULL)
		{
			ft_tp_free(a, i, j)
			ft_null_stop;
		}
		while (j < n)
		{
			a[i][j] = cood_new();
			if (a[i][j] == NULL)
				ft_null_stop;
			j++;
		}
		i++;
	}
	
	*/
