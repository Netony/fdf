/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_vector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:23:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/05/30 22:55:04 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_vec	*vec_init(int x, int y)
{
	t_vec	*vec;

	vec = (t_vec *)malloc(sizeof(t_vec *));
	vec->x = x;
	vec->y = y;
	return (vec);
}

t_vec	*vec_add(t_vec *a, t_vec *b)
{
	t_vec	*add;

	add = (t_vec *)malloc(sizeof(t_vec *));
	add->x = a->x + b->x;
	add->y = a->y + b->y;
	return (add);
}

t_vec	*vec_sub(t_vec *a, t_vec *b)
{
	t_vec	*sub;

	sub = (t_vec *)malloc(sizeof(t_vec *));
	sub->x = a->x - b->x;
	sub->y = a->y - b->y;
	return (sub);
}

t_vec	*vec_rotate(t_vec *a, int x, int y, int z)
{
	t_vec	*rotate;

	while (
	rotate = (t_vec *)malloc(sizeof(t_vec *));

	return (rotate);	
}
