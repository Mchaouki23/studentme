#include <stdio.h>       
#include <string.h>

       
void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str = (const unsigned char *)s;

	size_t i = 0;
 	while(i < n)
	{
		if(str[i] == (unsigned char) c)
			return (void *)(str + i);
		i++;
	}

	return NULL;
}
int	main()
{
	char arr[] = "hello hi bye";
    	printf("%s\n", ft_memchr(arr, 'l', sizeof(arr)));
}
