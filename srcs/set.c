/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:19:24 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/26 18:41:12 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	cood_setdel(t_cood ***set, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
		ft_rowdel(set[i], col);
	free(set);
}

void	cood_rowdel(t_cood **row, int col)
{
	int	j;

	j = 0;
	while (j < col)
		free(row[j++]);
	free(row);
}

t_cood	***cood_setnew(int row, int col)
{
	t_cood	***set;
	int		i;
	int		j;

	set = (t_cood ***)malloc(sizeof(t_cood **) * row);
	if (set == NULL)
		return (NULL);
	i = 0;
	while (i < row)
	{
		set[i] = (t_cood **)malloc(sizeof(t_cood *) * col);
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

t_cood	**ft_ltor(t_list *node, int i, int col)
{
	t_cood	**row;
	char	**spt;
	int		z;
	int		j;

	row = (t_cood **)malloc(sizeof(t_cood *) * col);
	if (row == NULL)
		return (NULL);
	spt = (char **)(node->content);
	j = 0;
	while (j < col)
	{
		z = ft_atoi(spt[i]);
		row[j] = ft_codnew(j, i, z, z);
		if (row[i] == NULL)
			cood_rowdel(row, col);
		i++;
	}
	return 

}

t_cood	***cod_ltos(t_list *lst, int row, int col)
{
	t_cood	***ltos;
	int		i;
	int		j;

	ltos = cood_setnew(row, col);
	if (ltos == NULL)
		return (NULL);
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			z = ft_atoi((lst->content)[j]);
			ltos[i][j] = cood_new(i, j, z, highlight(0x00FF0000, z));
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

