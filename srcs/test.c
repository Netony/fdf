#include <stdio.h>

int	spec_pair(char *s);
int	ft_stridx(char const *s, char c);

int	main(void)
{
	printf("%d\n", spec_pair);
}

int	spec_pair(char *s)
{
	const char	*pairs = "<>()[]{}\"\"''";

	return (ft_stridx(pairs, s[0]) + 1);
}

// printf("there exist odd quotes\n");
//
int	ft_stridx(char const *s, char c)
{
	char	*strchr;
	int		idx;

	strchr = ft_strchr(s, c);
	if (strchr == NULL)
		return (-1);
	idx = (int)(strchr - s);
	return (idx);
}
