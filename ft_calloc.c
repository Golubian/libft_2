#include <stdlib.h>
static void ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		((char *) s)[n - 1] = 0;
		n--;
	} 
	return (s);
}

void *calloc(size_t nmemb, size_t size)
{
	void *re;

	re = malloc(nmemb * size);	
	if (!re)
		return (NULL);
	ft_bzero(re, nmemb * size);
	return (re);
}
