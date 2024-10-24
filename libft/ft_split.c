#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int i = 0;
	int len = 0;

	while(s[i] != '\0')
	{
		if(s[i] == c)
			len++;
		i++;
	}
}

int	main()
{
	char *p = "hello:hi:bye";
	char a = ':';
	printf("%s\n", ft_split(p, a));
}
