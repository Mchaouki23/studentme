#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return 0;
}
int	main()
{
	char c = '!';
	printf("me %d   ", ft_isalpha(c));
	printf("%d     ", isalpha(c));
}

