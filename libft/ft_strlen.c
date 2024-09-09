#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len = 0;
	while(s[len] != '\0')
		len++;
	return len;
}

int	main()
{
	char st[] = "hello malak";
	printf("len %zu  ", ft_strlen(st));
	printf("  true %zu ", strlen(st));
}
