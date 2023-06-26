/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:05:44 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 18:45:11 by dajeon           ###   ########.fr       */
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

int	color(int z)
{
	int	color;

	if (z > 0)
		color = highlight(0x00ff0000, z);
	else if (z < 0)
		color = lowlight(0x0000ff00, z);
	else
		color = 0x00ffffff;
	return (color);
}

static int	highlight(int color, int height)
{
	static int	max;

	if (height > max)
		max = height;
	return (color_iofn(0x00000000, color, height, max));
}

static int	lowlight(int color, int height)
{
	static int	min;

	if (height < min)
		min = height;
	return (color_iofn(0x00000000, color, height, min));
}
