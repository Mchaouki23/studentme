#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if(*little == '\0')
		return (char *)big;
	size_t i = 0;
	size_t j;
	while(big[i] != '\0' && i < len)
	{
		j = 0;
		while(little[j] != '\0' && i+j < len)
		{
			if(little[j] == big[i + j])
				j++;
			else
				break;
		}
		if(little[j] == '\0')
			return (char *)big + i;
		i++;
	}
	return NULL;
}

int	main()
{
	const char s[] = "hello hi new";
	const char t[] = "hi";
	printf("%s\n", ft_strnstr(s, t, 10));
}
