#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if(nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}

	return (result * sign);
}

int	main()
{
	char t[] = "   -2147483649hhsj34";
	printf(" %d ", ft_atoi(t));
	printf("real %d  ", atoi(t));
}
