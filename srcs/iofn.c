/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iofn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:44:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 12:58:48 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	iofn(int a, int b, int i, int n)
{
	int	x;

	x = a + (b - a) * i / n;
	return (x);
}

int	color_iofn(int a, int b, int i, int n)
{
	int	*a_trgb;
	int	*b_trgb;
	int	ret_trgb[4];
	int	color;
	int	j;
	
	a_trgb = color_to_trgb(a);
	b_trgb = color_to_trgb(b);
	j = 0;
	while (j < 4)
	{
		ret_trgb[j] = iofn(a_trgb[j], b_trgb[j], i, n);
		j++;
	}
	free(a_trgb);
	free(b_trgb);
	color = trgb_to_color(ret_trgb);
	return (color);
}

t_cood	*cood_iofn(t_cood *a, t_cood *b, int i, int n)
{
	t_cood	*cood;

	cood = (t_cood *)malloc(sizeof(t_cood));
	cood->x = iofn(a->x, b->x, i, n);
	cood->y = iofn(a->y, b->y, i, n);
	cood->z = iofn(a->z, b->z, i, n);
	cood->c = color_iofn(a->c, b->c, i, n);
	return (cood);
}
