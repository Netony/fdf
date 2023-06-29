/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:26:51 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/29 11:56:40 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "fdf.h"

void	fdf_rotate(t_dot ***set, double al, double be, double ga)
{

}

int	**ft_rotate(int **vec, double al, double be, double ga)
{
	const int	**tx;
	const int	**ty;
	int	**tz;

	tx = ft_arrnew_db(9, 1.0, 0, 0, 0, cos(al), -sin(al), 0, sin(al), cos(al));
	ty = ft_arrnew_db(9, cos(be), 0, sin(be), 0, 1, 0, -sin(be), 0, cos(be));
	tz = ft_arrnew_db(9, cos(ga), -sin(ga), 0, sin(ga), cos(ga), 0, 0, 0, 1);
}
