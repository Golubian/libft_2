static int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
