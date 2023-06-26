/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:23:03 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 13:51:47 by dajeon           ###   ########.fr       */
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

int	highlight(int color, int intense)
{
	return (color_iofn(0x00000000, color, intense, 100));
}

int	ft_sptsize(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}

void	ft_sptfree(void *ptr)
{
	int		i;
	char	**split;

	split = (char **)ptr;
	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

t_cood	***list_to_cood(t_cood ***dst, t_list *lst, int row, int col)
{
	int		i;
	int		j;
	char	**split;
	int		z;

	i = 0;
	while (i < row)
	{
		split = lst->content;
		j = 0;
		while (j < col)
		{
			z = ft_atoi(split[j]);
			dst[i][j] = cood_new(i * 10, j * 10, z, highlight(0x00FF0000, z));
			j++;
		}
		lst = lst->next;
		i++;
	}
	ft_lstclear(dst, ft_sptfree);
	return (dst);
}

t_cood	***cood_set_new(int row, int col)
{
	t_cood	***set;
	int		i;

	set = (t_cood ***)malloc(sizeof(t_cood **) * row);
	if (set == NULL)
		return (NULL);
	i = 0;
	while (i < row)
	{
		set[i] = (t_cood **)malloc(sizeof(t_cood *) * col);
		if (set[i] == NULL)
			cood_set_del(set, i);
		i++;
	}
	return (set);
}

void	cood_set_del(t_cood ***set, int n)
{
	int	i;

	i = 0;
	while (i < n)
		free(set[i++]);
	free(set);
}

void	
