#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n > 9 || n < -9)
	{
		if (n < 0)
			ft_putchar_fd(-(n / 10) + 48, fd);
		else
			ft_putchar_fd((n / 10) + 48, fd);
	}
	if (n < 0)
			ft_putchar_fd(-(n % 10) + 48, fd);
		else
			ft_putchar_fd((n % 10) + 48, fd);
}