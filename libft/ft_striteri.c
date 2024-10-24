#include <stdio.h>

void	ft(unsigned int index, char *c)
{
	if(index % 2 != 0)
	{
		if(*c >= 'a' && *c <= 'z')
			*c = *c - 32;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i = 0;

	while(s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

int	main()
{
	// char *h = "maliKA"; this is string literal we cant edit on it
	char h[] = "maliKA";
	ft_striteri(h, ft);
	printf("%s\n", h);
	

}
