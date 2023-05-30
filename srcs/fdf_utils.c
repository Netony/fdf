/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:23:03 by dajeon            #+#    #+#             */
/*   Updated: 2023/05/30 22:33:50 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_rgb_to_color(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

int		*ft_color_to_rgb(int color)
{
	int	*rgb;

	rgb = (int *)malloc(sizeof(int) * 4);
	rgb[0] = (color >> 24) & 255;
	rgb[1] = (color >> 16) & 255;
	rgb[2] = (color >> 8) & 255;
	rgb[3] = (color >> 0) & 255;
	return (rgb);
}
