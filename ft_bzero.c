void ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		((char *) s)[n - 1] = 0;
		n--;
	} 
	return (s);
}
