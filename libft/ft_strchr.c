#include <stdio.h>
#include <string.h>

/*char *ft_strchr(const char *s, int c)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return NULL;
}*/

char	*ft_strchr(const char *s, int c)
 {
 	while(*s != '\0')
	{
		if(*s == (char) c)
			return (char *)s;
		s++;
	}
	if(c == '\0')
		return (char *)s;
	return NULL;	
 }

int	main()
{
	const char t[] = "hello hi bye";
	printf("%s \n", strchr(t, '\0'));
	printf("%s", ft_strchr(t, '\0'));

}
