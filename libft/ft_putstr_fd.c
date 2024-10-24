#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	while(*s)
	{
		write(fd, s, 1);
		s++;
	}
}

int	main()
{
	char *t = "hello";
	ft_putstr_fd(t, 1);
}

