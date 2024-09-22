#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
		return (1024);
	else
		return 0;
}
int	main()
{
	char c = '4';
	printf("me %d   ", ft_isalnum(c));
	printf("%d     ", isalnum(c));
}
