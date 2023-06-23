void	ft_splitn_free(char **split, int n)
{
	int	i;

	i = 0;
	while (i < n)
		free(split[i++]);
}

void	ft_split_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
}
