#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main()
{
	char t = 'g';
	ft_putchar_fd(t, 1);
}
