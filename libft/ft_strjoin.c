#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len = 0;
	while(s[len] != '\0')
		len++;
	return len;
}

char *ft_strcpy(char *dest, const char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t lens1 = ft_strlen(s1);
	size_t lens2 = ft_strlen(s2);
	char *str = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
	if(!str)
		return NULL;

	ft_strcpy(str, s1);
	ft_strcpy(str + lens1, s2);

	return str;
}

int	main()
{
	char const *ss = "hello";
	char const *t = "world";
	printf("%s\n", ft_strjoin(ss, t));
}
