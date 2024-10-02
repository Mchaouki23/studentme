#include <stdio.h>       
#include <string.h>
       
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	char *d = (char *)dest;
	const char *s = (const char *)src;

	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}

int main()
{

	char *src = "hello lala tara";
	char dest[15];
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("%s\n", dest);
}
