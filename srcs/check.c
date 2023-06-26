int ft_check(char *s)
{
	int	i;

		if (ft_isin(s[i], "+-"))
			i++;
		while (ft_isin(s[i], "0123456789"))
			i++;
		if (ft_isin(s[i], ","))
		{
			i++;
			while (ft_isin(s[i], "x0123456789"))
				i++;
		}
}

int	get_unsigned(char *s)
{
	int	i;

	i = 0;
	if (ft_isneq(&s[i], "0x"))
	{
		i += 2;
		get_hexa(&s[i]);
	}
	if (ft_isneq(&s[i], "0X"))
	{
		i += 2;
		get_hexa_large(&s[i]);
	}
	else
		get_deci(s);
}

}

int	ft_isneq(char *s1, char *s2, int n)
{	
	int	isneq;

	isneq = !ft_strncmp(s1, s2, n);
	return (isneq);
}

int	get_hexa(char *s)
{
	return(ft_atoi_base(*s, "0123456789abcdef"));
}

int	get_hexa_large(char *s)
{
	return(ft_atoi_base(*s, "0123456789ABCDEF"));
}

int	get_
