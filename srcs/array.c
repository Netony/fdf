/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:54:19 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/30 14:49:05 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "matrix.h"

void	ft_arradd(t_list **arr, double n)
{
	double	*p;
	t_list	*new;

	p = (double *)malloc(sizeof(double));
	if (p == NULL)
		return (NULL);
	*p = n;
	new = ft_lstnew(p);
	if (new == NULL)
	{
		free(p);
		return (NULL);
	}
	ft_lstadd_back(lst, new);
}

double	**ft_atom(t_list *arr, int size)
{
	double	**mx;

	mx = ft_mxnew(arr, size, 1);
	if (mx == NULL)
		return (NULL);
	return (mx);
}
