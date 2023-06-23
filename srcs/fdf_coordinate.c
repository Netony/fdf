/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_coordinate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:51:29 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/20 22:12:48 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_cood	*cood_new(int x, int y, int z, int c)
{
	t_cood	*new;

	new = (t_cood *)malloc(sizeof(t_cood));
	if (new == NULL)
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	new->c = c;
	return (new);
}

t_cood	*cood_iofn(t_cood *dst, t_cood *a, t_cood *b, int i, int n)
{
	dst->x = iofn(a->x, b->x, i, n);
	dst->y = iofn(a->y, b->y, i, n);
	dst->z = iofn(a->z, b->z, i, n);
	dst->c = color_iofn(a->c, b->c, i, n);
	return (dst);
}

int	**cood_to_matrix(t_cood *cood)
{
	int	**matrix;

	matrix = (int **)malloc(sizeof(int *) * 1);
	if (matrix == NULL)
		return (NULL);
	(*matrix)[0] = cood->x;
	(*matrix)[1] = cood->y;
	(*matrix)[2] = cood->z;
	return (matrix);
}
