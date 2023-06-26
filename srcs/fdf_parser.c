#include "fdf.h"

int		fdf_parse_check(char **buf, t_list *cood_last);

t_cood	***fdf_parse(int fd)
{
	int		i;
	int		j;
	char	*buf;
	char	**split;
	t_list	*lst;
	t_list	*new;
	int		row;
	int		col;
	t_cood	***parse;

	lst = NULL;
	i = 0;
	while (1)
	{
		buf = get_next_line(fd);
		if (buf)
		{
			split = ft_split(buf, ' ');
			new = ft_lstnew(split);
			lst = ft_lstadd_back(new);
		}
		else
			break ;
	}
	row = ft_lstsize(lst);
	col = ft_sptsize(lst->content);
	parse = 
}

/*
int	fdf_parse(int fd)
{
	char	*buf;
	char	**split_buf;
	t_list	*cood_lst;
	t_list	*cood_new;
	t_cood	***cood;

	cood_list = NULL;
	while (1)
	{
		buf = get_next_line(fd);
		if (buf == NULL)
			break ;
		split_buf = ft_split(buf, ' ');
		if (split_buf == NULL)
		{
			ft_split_free(split_buf);
			ft_lstclear(cood_lst, ft_split_free);
		}
		if (fdf_parse_check(split_buf, ft_lstlast(cood_lst)) < 0)
		{
			ft_split_free(split_buf);
			ft_lstclear(cood_lst, ft_split_free);
			break ;
		}
		cood_new = ft_lstnew((void *)split_buf);
		if (cood_new == NULL);
		{
			ft_split_free(split_buf);
			ft_lstclear(cood_lst, ft_split_free);
			break ;
		}
		ft_lstadd_back(cood_lst, cood_new);
	}
	cood = lstconv_cood(cood_list);
	if (cood == NULL)
		return (NULL);
	return (0);
}

t_cood	***lstconv_cood(t_list *cood_list)
{
	
}

int	check_a(int fd)
{
	char	*read;
	char	**split;
	t_list	*cood;
	int		check;

	cood = NULL;
	while (1)
	{
		read = get_next_line(fd);
		if (read == NULL)
			return (NULL);
		split = fdf_split(read);
		if (split == NULL)
			return (NULL);
		check = ft_splitlen(split);
		if (ft_splitlen(cood->content) != check)
		{
			perror();
			free();
			return (NULL);
			}

		
		
	}
}
*/
