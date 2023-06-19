/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:45:15 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/18 19:48:26 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	char	*nstr;
	size_t	put;

	nstr = ft_itoa(n);
	put = write(fd, nstr, ft_strlen(nstr));
	return (put);
}
