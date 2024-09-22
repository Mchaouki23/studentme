#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	int found = -1;
	while(s[i] != '\0')
	{
		if(s[i] == (char)c)
			found = i;
		i++;
	}
	if(found != -1)
		return (char *)s + found;
	if(c == '\0')
		return (char *)s + i;
	return NULL;
}

int	main()
{
	const char t[] = "heillio hi biye";
	printf("%s \n", strrchr(t, '\0'));
	printf("%s", ft_strrchr(t, '\0'));

}
