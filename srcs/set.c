/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:19:24 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/28 21:22:49 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	dot_setdel(t_dot ***set, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
		ft_rowdel(set[i], col);
	free(set);
}

void	dot_rowdel(t_dot **row, int col)
{
	int	j;

	j = 0;
	while (j < col)
		free(row[j++]);
	free(row);
}

t_dot	***dot_setnew(int row, int col)
{
	t_dot	***set;
	int		i;
	int		j;

	set = (t_dot ***)malloc(sizeof(t_dot **) * row);
	if (set == NULL)
		return (NULL);
	i = 0;
	while (i < row)
	{
		set[i] = (t_dot **)malloc(sizeof(t_dot *) * col);
		if (set[i] == NULL)
		{
			ft_setdel(set, row, i);
			return (NULL);
		}
		j = 0;
		while (j < col)
		{

		}
		i++;
	}
	return (set);
}

t_dot	**ft_ltor(t_list *node, int i, int col)
{
	t_dot	**row;
	char	**spt;
	int		z;
	int		j;

	row = (t_dot **)malloc(sizeof(t_dot *) * col);
	if (row == NULL)
		return (NULL);
	spt = (char **)(node->content);
	j = 0;
	while (j < col)
	{
		z = ft_atoi(spt[i]);
		row[j] = ft_codnew(j, i, z, z);
		if (row[i] == NULL)
			dot_rowdel(row, col);
		i++;
	}
	return 

}

t_dot	***cod_ltos(t_list *lst, int row, int col)
{
	t_dot	***ltos;
	int		i;
	int		j;

	ltos = dot_setnew(row, col);
	if (ltos == NULL)
		return (NULL);
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			z = ft_atoi((lst->content)[j]);
			ltos[i][j] = dot_new(i, j, z, highlight(0x00FF0000, z));
			if (ltos[i][j] == NULL)
			{
				
			}
			j++;
		}
		lst = lst->next;
		i++;
	}
	return (ltos);
}

