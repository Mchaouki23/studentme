#include <stdio.h>       
#include <strings.h>


void ft_bzero(void *s, size_t n)
{
	char *t = (char *)s;
	size_t i = 0;

	while(i < n)
	{
		t[i] = 0;
		i++;
	}
}

int	main()
{
	int t[] = {1,2,3,4,5};
	//printf("%s\n", t);
	ft_bzero(t, sizeof(t));
	printf("uz%zu\n", sizeof(t));
	for (int i = 0; i < 5; i++) {
        	printf("%d ", t[i]);
    	}
}
