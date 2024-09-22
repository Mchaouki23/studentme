#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return c;
}

int	main()
{
	char p = 'A';
	printf("me %c  ", ft_tolower(p));
	printf(" %c  ", tolower(p));
}

