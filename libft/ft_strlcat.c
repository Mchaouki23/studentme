#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	len = 0;
	while(s[len] != '\0')
		len++;
	return len;
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dlen = ft_strlen(dest);
	size_t slen = ft_strlen(src);

	if(size <= dlen)
		return (size + slen);
	size_t i = dlen;
	size_t t = 0;
	while(i < (size - 1) && src[t] != '\0')
	{
		dest[i] = src[t];
		i++;
		t++;
	}
	dest[i] = '\0';

	return (dlen + slen);
}

int	main()
{
	char s[] = "hello";
	char d[] = "malika ";
	printf("size %zu   ", sizeof(d));
	printf("l %zu  ", ft_strlcat(d, s, sizeof(d)));
}
