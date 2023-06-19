/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:42:05 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/18 21:01:31 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_ltoa(long n, char *base, int issigned)
{
	if (issigned)
}

char	*ltoa_number(unsigned long n, char *base)
{
	char	*ltoa;
	int		digit;
	int		radix;
	int		i;

	digit = ltoa_digit(n);
	i = 0;
	while (digit--)
	{
		ltoa[i++] = n % radix;
		n /= radix;
	}
	ltoa[i] = '\0';
	return (ltoa);
}

char	*ltoa_digit(unsigned long n, char *base)
{
	int radix;
	int	digit;

	radix = ft_strlen(base);
	digit = 1;
	while (n / radix)
	{
		n /= radix;
		digit++;
	}
	return (digit);
}
