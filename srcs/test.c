#include <stdio.h>

int	main(void)
{
	const char	*a = "<>()[]{}\"\"''";

	printf("%s\n", a);
}

int	parse(char const *s, char *spec)
{
	while (*s)
	{
		if (ft_isin(*s, spec))
		{
			parse_spec(s, &i, spec);
		}
		else
			parse_chunk(s, &i, spec);
	}
}

int	parse_move_size(char const *s, char *spec)
{
	int	size;

	if (ft_isin(*s, spec))
		size = move_size_spec(s, spec);
	else
		size = move_size_chunk(s, spec);
	return (size);
}

int	move_size_spec(char const *s, char *spec)
{
	int	size;

	if (*s == '(')
		move_size_paren
}

int	move_size_chunk(char const *s, char *spec)
{
	
}

char	*parse_chunk(char const *s, int *i, char *spec)
{
	
}

int	chunk_len(char const *s, char *spec)
{
	int	len;

	len = 0;
	while (s[len])
	{
		if (ft_isin(s[len], spec))
			break ;
		else
			len++;
	}
	return (len);
}

char	*parse_spec(char const *s, int *i, char esc)
{
	if (s[*i] == '\\')
		spec_esc(&s[*i]);

}

int	spec_len(char const *s, char esc)
{

}

// printf("there exist odd quotes\n");
