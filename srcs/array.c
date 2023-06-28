/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:54:19 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/28 21:33:52 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

int	*ft_arrnew(int n, ...)
{
	va_list	ap;
	int		*arr;
	int		i;

	arr = (int *)malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);
	va_start(ap, n);
	i = 0;
	while (i < n)
		arr[i++] = va_arg(ap, int);
	va_end(ap);
	return (arr);
}

int	**ft_atom(int *arr)
{
	int	**mx;

	mx = (int **)malloc(sizeof(int *) * 1);
	if (mx == NULL)
		return (NULL);
	mx[0] = arr;
	return (mx);
}
