#include <unistd.h>

static void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void ft_putstr_fd(char *s, int fd)
{
	while (s && *s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

void ft_putendl_fd(char *s, int fd)
{
	if (s)
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}