#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}

int	main()
{
	char p = 'K';
	printf("me %c  ", ft_toupper(p));
	printf(" %c  ", toupper(p));
}
