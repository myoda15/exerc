#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n;
	int	divisor;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		divisor = 2;
		while (n > 1)
		{
			if (n % divisor == 0)  // Se divisor divide n
			{
				printf("%d", divisor);
				 n /= divisor;
				if (n > 1)
					printf("*");
			}
			else
				divisor++;
		}
	}
	printf("\n");
	return (0);
}