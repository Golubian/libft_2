static int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}
