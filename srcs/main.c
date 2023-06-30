/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:19:27 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/30 19:06:52 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "matrix.h"

int	ft_isbetween(int c, int a, int b);

int	ft_check(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isin(s[i], set))
			i++;
	}
	return (i);
}

int	ft_pattern(char const *s, char const **set)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	while (set[i])
	{
		check = ft_check(s, set[i]);
		if (check == 0)
			return (0);
		j += check;
		i++;
	}
	return (j);
}

int	main(void)
{
	printf("%d\n", ft_isbetween('d', 'a', 'z'));
	return (0);
}

int	ft_isbetween(int c, int a, int b)
{
	if (a <= c && c <= b)
		return (c - a);
	else
		return (0);
}

void	test(void)
{
	char	**set;

	set = ft_split("0123456789 , 0x [0123456789]{8}", ' ');
	printf("%d\n", ft_pattern("1,0x55", "0123456"));
}

typedef struct	s_pat
{
	int		min;
	int		max;
	char	*set;
}	t_pat;
