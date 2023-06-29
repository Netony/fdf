/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:51:29 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/29 11:37:05 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_dot	*ft_dotnew(double x, double y, double z, int height)
{
	t_dot	*new;
	double	*arr;
	double	**mx;

	new = (t_dot *)malloc(sizeof(t_dot));
	if (new == NULL)
		return (NULL);
	arr = ft_arrnew_db(3, x, y, z);
	if (arr == NULL)
		return (NULL);
	mx = ft_atom(arr, 3);
	if (mx == NULL)
	{
		free(new);
		new = NULL;
	}
	else
	{
		new->mx = mx;
		new->color = color_height(height);
	}
	free(arr);
	return (new);
}

void	ft_dotdel(t_dot *dot)
{
	free(dot->mx);
	free(dot);
}
