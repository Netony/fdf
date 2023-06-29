/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:05:16 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/29 11:05:45 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

double	**ft_mxnew(double *nbrs, int row, int col);
double	**ft_mxzero(int row, int col);
void	ft_mxdel(double **matrix, int row);
double	**ft_mxmul(double **a, double **b, int *sizes);

#endif
