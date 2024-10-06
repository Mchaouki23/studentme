#include <stdio.h>       
#include <string.h>

       
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ss1 = (const unsigned char *)s1;
	const unsigned char *ss2 = (const unsigned char *)s2;
	
	if(n == 0)
		return 0;
	size_t i = 0;
	while(i < n)
	{
		if(ss1[i] != ss2[i])
			return ss1[i] - ss2[i];
		i++;
	}
	return (0); 
}

int	main()
{
	printf("%d\n", memcmp("kello", "hello", 5));
}
