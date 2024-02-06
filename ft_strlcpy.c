static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size > 0)
	{
		dst[size - 1] = 0; 
		size--;
	}
	while (size > 0)
	{
		dst[size - 1] = src[size - 1];
		size--;
	}

	return (ft_strlen(src));
}