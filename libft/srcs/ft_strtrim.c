/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:24:30 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/16 10:20:37 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		start;
	int		end;
	char	*trim;

	i = 0;
	start = -1;
	end = -1;
	while (s1[i] && (start == -1 || end == -1))
	{
		if (start == -1 && !ft_isin(s1[i], set))
			start = i;
		if (end == -1 && !ft_isin(s1[ft_strlen(s1) - i - 1], set))
			end = ft_strlen(s1) - i;
		i++;
	}
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trim == NULL)
		return (NULL);
	if (start == end)
		trim[0] = '\0';
	else
		ft_strlcpy(trim, s1 + start, end - start + 1);
	return (trim);
}
