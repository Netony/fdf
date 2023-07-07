#include "fdf.h"

int		fdf_parse_check(char **buf, t_list *cood_last);

t_cood	***fdf_parse(int fd)
{
	
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

int	

int	fdf_parse_size_check(char **split, t_list *cur)
{
	int	len1;
	int	len2;

	len1 = ft_sptlen(cur->content);
	len2 = ft_sptlen(split);
	if (len1 == len2)

}

t_dot	*fdf_parse_format_check(char *format)
{
	int	i;
	int	chk;

	i = 0;
	chk = ft_chknset(&format[i], "0123456789", 1, -1);
	if (chk)
		i += chk;
	else
		return (0);
	chk = ft_chknset(&format[i], ",", 1, 1);
	if (chk)
	{
		chk = ft_chknstr(&format[i], "0x");
		if (chk)
		{
			i += chk;
			chk = ft_chknset(&format[i], "0123456789abcdef"); 
			if (!chk)
				chk = ft_chkset(&format[i], "0123456789ABCDEF");
			if (chk)
				i += chk;
			else
				return (0);
		}
	}
	chk = format[i] == 
	if (ft_
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
