#include <stdio.h>       
#include <string.h>


void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	char *d = (char *)dest;
	const char *s = (const char *)src;
	
	if(d == s || n == 0)
		return dest;

	/*if(s < d && s + n > d)
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
    	}*/ //correct but not safe

	if(s < d && s + n > d)
	{
		i = n;
		while(i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
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
	const char ss[] = "hello hi";
	char de[9];
	ft_memmove(de, ss, sizeof(char) * 9);
	printf("de = %s\nss = %s\n", de, ss);

	printf("\n overlap \n");
	
	
	/*const char t[] = "ComplexOverlappingTest";
	char *k = (char *)t + 8;
	
	printf("dest = %s\nsrc = %s\n", k, t);
	ft_memmove(k, t + 4, sizeof(char) * 16);
	printf("dst = %s\nsrc = %s\n", k, t);
*/
	const char d[] = "hello hi";
    	char *s = d + 2;
    	ft_memmove(d, s, sizeof(char) * 4);
    	printf("d = %s\ns = %s\n", d, s);
}
