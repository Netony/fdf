/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:23:03 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/20 22:17:59 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	trgb_to_color(int *trgb)
{
	int	t;
	int	r;
	int	g;
	int	b;

	t = trgb[0];
	r = trgb[1];
	g = trgb[2];
	b = trgb[3];
	return (t << 24 | r << 16 | g << 8 | b);
}

int	*color_to_trgb(int color)
{
	int	*trgb;

	trgb = (int *)malloc(sizeof(int) * 4);
	trgb[0] = (color >> 24) & 255;
	trgb[1] = (color >> 16) & 255;
	trgb[2] = (color >> 8) & 255;
	trgb[3] = (color >> 0) & 255;
	return (trgb);
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
		ret_trgb[j] = a_trgb[j] + (b_trgb[j] - a_trgb[j]) * i / n;
		j++;
	}
	free(a_trgb);
	free(b_trgb);
	color = trgb_to_color(ret_trgb);
	return (color);
}
