/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_math.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:28:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/28 20:41:39 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

int	abs(int n);

int	larger(int x, int y)
{
	if (abs(x) >= abs(y))
		return (x);
	else
		return (y);
}

int	abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
