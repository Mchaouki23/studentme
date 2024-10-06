#include <stdio.h>       
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t x = 0;

	while(str[x] != '\0')
		x++;
	return x;
}

char	*ft_strdup(const char *s)
{
	size_t	len = ft_strlen(s) + 1;
	char *dup = (char *)malloc(len * sizeof(char));
	size_t i = 0;

	while(i < len - 1)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';

	return dup;
}

int	main()
{
	const char t[] = "hello";
	printf("%s\n", ft_strdup(t));
}
