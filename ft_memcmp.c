int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *) s1)[i] == ((char *) s2)[i] && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return (((char *) s1)[i]- ((char *) s2)[i]);
}