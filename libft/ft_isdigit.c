#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1024);
	else
		return 0;
}
int	main()
{
	char c = '7';
	printf("me %d   ", ft_isdigit(c));
	printf("%d     ", isdigit(c));
}
