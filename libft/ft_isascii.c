#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return (1024);
	else
		return 0;
}
int	main()
{
	char c = 'r';
	printf("me %d   ", ft_isascii(233));
	printf("%d     ", isascii(233));
}
