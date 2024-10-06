#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *st)
{
	size_t n = 0;
	while(st[n] != '\0')
		n++;
	return n;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if(ft_strlen(s) <= start)
			return NULL;
	char *sub = (char *)malloc((len + 1) * sizeof(char));
	if(!sub)
		return NULL;

	size_t i = 0;
	while(i < len && s[start] != '\0')
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';

	return sub;
}

int	main()
{
    const char str[] = "hello, world";

    printf("%s\n", ft_substr(str, 4, 5));
}
