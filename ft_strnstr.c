char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (0);
	i = 0;
	while (*haystack && i < n)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
			j++;
		if (needle[j] == 0)
			return (haystack[i + j]);
	}
	return (0);
}