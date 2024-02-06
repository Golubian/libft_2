#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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

char	*ft_strdup(const char *s)
{
	char	*new;

	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s, ft_strlen(s) + 1);
	return (new);
}