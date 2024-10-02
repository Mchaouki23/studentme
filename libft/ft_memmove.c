#include <stdio.h>       
#include <string.h>


void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	char *d = (char *)dest;
	const char *s = (const char *)src;
	
	if((s < d && s + n > d) || (d < s && d + n > s))
    	{
        	char p[n];
        	int x = 0;
        	while(x < n)
        	{
          		p[x] = s[x];
        		x++;
        	}
        	while(i < n)
        	{
            	d[i] = p[i];
            	i++;
        	}
    	}
	else
	{
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return dest;
}

int	main()
{
	const char s[] = "hello hi";
	char d[9];
	ft_memmove(d, s, sizeof(char) * 9);
	printf("d = %s\ns = %s\n", d, s);

	printf("\n overlap \n");
	
	
	const char t[] = "ComplexOverlappingTest";
	char *k = (char *)t + 8;
	
	printf("dest = %s\nsrc = %s\n", k, t);
	ft_memmove(k, t + 4, sizeof(char) * 16);
	printf("dst = %s\nsrc = %s\n", k, t);

}
