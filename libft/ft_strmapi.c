#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	ft(unsigned int index, char c)
{
	if(index % 2 != 0)
	{
		if(c >= 'a' && c <= 'z')
			c = c - 32;
	}
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if(!s || !f)
		return NULL;
	char *new = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	if(!new)
		return NULL;
	
	unsigned int i = 0;
	while(s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return new;
}

int	main()
{
	char h = 'a';
	printf("%s\n", ft_strmapi("mALIka", ft));
}
