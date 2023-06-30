/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:10:10 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/30 20:30:24 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	s_flag
{
	char	c;
	char	*flag;
	int		width;
	int		precision;
}	t_flag;

/*
int	main(void)
{
	printf("%#0++.5d0\n", 45);
	printf("%#0++.5c0\n", 45);
	printf("%#0++.5s0\n", "45");
	printf("%#0++.5p0\n", 45);
	printf("%#0++.5i0\n", 45);
	printf("%#0++.5u0\n", 45);
	printf("%#0++.5x0\n", 45);
	printf("%#0++.5X0\n", 45);
	printf("%#0++.5%0\n", 45);
}
*/

int	ft_iswhere(const char *s, int start, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
	}
	if (c == '\0')
		return (i);
	return (-1);
}

int	ft_isnowhere(const char *s, int start, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			return (i);
	}
	if (c != '\0')
		return (i);
	return (-1);
}

t_flag	*get_flag_from_format(const char *s)
{
	int		i;
	t_flag	*flag;

	i = 0;
	while (s[i])
	{
		ft_iswhere(s, i, c);
		ft_substr(s, i, c);
	}
	return (flag);
}

char	*get_chunk_from_flag(t_flag *flag, int test)
{
	char	*chunk;
	char	*new;
	char	*join;

	chunk = ft_itoa(test);
	if (chunk == NULL) ;
	
	
	free(chunk);
}

#include <stdlib.h>

static int	inter_isin(char const *s, int end) // 
{
	int	j;

	j = 0;
	while (j < end)
	{
		if (s[j] == s[end])
			return (j);
		j++;
	}
	return (0);
}

static int	inter_len(char const *s)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i])
	{
		if (inter_isin(s, i) == 0)
			len++;
		i++;
	}
	return (len);
}

char	*ft_inter(char const *s)
{
	int		i;
	int		j;
	char	*inter;

	inter = (char *)malloc(sizeof(char) * inter_len(s) + 1);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (inter_isin(s, i) == 0)
			inter[j++] = s[i];
		i++;
	}
	inter[j] = '\0';
	return (inter);
}
