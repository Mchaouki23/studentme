#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if(n == 0)
		return 0;
	size_t i = 0;
	while(i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if(s1[i] != s2[i])
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (0); 
}

int	main()
{
	const char *s1 = "hello";
   	const  char *s2 = "hàelloWorld";
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d \n", strncmp(s1, s2, 3));
}
