static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char *ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen((char *) s);
	while (len >= 1)
	{
		if (s[len - 1] == c)
			return ((char *) (s + (len - 1)));
		len--;
	}
	len = ft_strlen((char *) s);
	return ((char *) (s + len));
}
