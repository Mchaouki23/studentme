#include <stdio.h>

size_t    ft_strlen(const char *str)
{
    size_t    i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t    i;
    size_t    l;
    
    l = ft_strlen(src);
    i = 0;
    if(size != 0)
    {
    	while (src [i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        while(i < size)
        {
        	dest[i] = '\0';
          	i++;
        }
    }
    return (l);
}

int	main()
{
	char s[] = "hi lala";
	char d[0];
	printf("l %zu ", ft_strlcpy(d, s, sizeof(d)));
}
