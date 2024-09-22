#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return (1024);
	else
		return 0;
}
int	main()
{
	char c = '\n';
	printf("me %d   ", ft_isprint(c));
	printf("%d     ", isprint(c));
}
