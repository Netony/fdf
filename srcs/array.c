/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:54:19 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/29 11:54:32 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "matrix.h"

double	*ft_arrnew_db(int n, ...)
{
	va_list	ap;
	double	*arr;
	int		i;

	arr = (double *)malloc(sizeof(double) * n);
	if (arr == NULL)
		return (NULL);
	va_start(ap, n);
	i = 0;
	while (i < n)
		arr[i++] = va_arg(ap, double);
	va_end(ap);
	return (arr);
}

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

double	**ft_atom(double *arr, int size)
{
	double	**mx;

	mx = ft_mxnew(arr, size, 1);
	if (mx == NULL)
		return (NULL);
	return (mx);
}
