/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:12:53 by dajeon            #+#    #+#             */
/*   Updated: 2023/07/03 11:22:57 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_spterr(char **split, int n)
{
	int	i;

	i = 0;
	while (i < n)
		free(split[i++]);
	free(split);
}

void	ft_sptdel(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

int	ft_sptsize(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}
