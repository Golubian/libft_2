void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;

	str = (char *) s;
	while (*str && *str != c)
		str++;
	return ((void *) str);
}