#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int len = 0;
	int i = 0;
	int j = 0;

	while(s1[i] != '\0')
	{
		j = 0;
		while(set[j] != '\0')
		{
			if(set[j] == s1[i])
				break;
			j++;
		}
		if(set[j] == '\0')
			len++;
		i++;
	}
}

int	main()
{
	char const *s1 = "!!!Warning!!!";
	char const *set = "!";
	printf("%s\n", ft_strtrim(s1, set));
}
