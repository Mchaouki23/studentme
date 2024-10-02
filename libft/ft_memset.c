#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i = 0;
	unsigned char *p = (unsigned char *)s;
	while(i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return s;
}

int main()
{
	char t[10];
	//memset(t, 'f', 10);
	ft_memset(t, 'm', 10);
	for(int i = 0; i < 10; i++)
	{
		printf("%c", t[i]);
	}
	printf("\n");
}
