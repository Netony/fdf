/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:49:57 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/30 19:06:53 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	t_dot	***map;

}

t_list	*parse_new_map_list(int fd)
{
	t_list	*map;
	t_list	*new;
	char	**spt;
	char	*buf;

	map = NULL;
	while (1)
	{
		buf = get_next_line(fd);
		if (buf == NULL)
			break ;
		spt = ft_split(buf);
		free(buf);
		if (spt == NULL)
			break ;
		new = ft_lstnew(spt);
		if (new == NULL)	
		{
			ft_sptdel(spt);
			break ;
		}
		ft_lstadd_back(&map, new);
	}
	return (map);
}

int	parse_get_row_size(t_list *map)
{
	int	check;
	int	cur;
	int	size;

	size = 0;
	check = ft_sptlen(map->content);
	while (map)
	{
		cur = ft_sptlen(map->content);
		if (check != cur)
			return (0);
		size++;
		map = map->next;
	}
	return (size);
}

t_dot	***fdf_parse(t_list *map)
{
	t_list	*map_list;
	t_dot	***map_dot;
	int		row;

	map_list = parse_new_map_list(fd);
	if (map_list == NULL)
		return (NULL);
	row = parse_get_row_size(map_list);
	if (row == 0)
	{
		ft_lstclear(map_list);
		return (NULL);
	}
}

t_dot	***parse_list_to_map(t_list *map, int row)
{
	t_dot	***map;
	int		i;
	int		len;

	map = (t_dot ***)malloc(sizeof(t_dot **) * row);
	if (map == NULL)
		return (NULL);
	i = 0;
	while (map)
	{
		len = ft_sptsize(map->content);
		map = (t_dot **)malloc(sizeof(t_dot *) * );
		map = map->next;
				
	}
}

t_dot	**ltom_spt_to_row(char **spt)
{
	int	i;

	i = 0;
	while (spt[i])
	{
		
	}
}

t_dot	*stor_str_to_dot(char *s)
{
	char	**info;

	if (ft_isin(',', s))
	{
	}
}

int	stod_check(char *s)
{
	int		check;
	char	**check_lst;
	
}

t_list	*stod_check_list(void)
{
	t_list	*check;
	char	*new;
	
	chk = NULL;
	new = ft_strdup("0123456789");
	if (new == NULL)
		return 
	
}

int	ft_pattern_full(char const *s, char const **set)
{
	int	len;

	len = ft_strlen(s);
	if (len == ft_pattern(s, set))
		return (1);
	else
		return (0);
}

char	*ft_quote(char const *s, char a)
{

}

char	*ft_check_quote(char const *s, char a)
{
	
}

char	*s
