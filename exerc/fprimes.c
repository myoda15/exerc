#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	divisor;
	int	n;

	n = atoi(av[1]);
	divisor = 2;
	if (ac == 2)
	{
		if (n == 1)
			printf("1");
		while (n > 1)
		{
			if (n % divisor == 0)
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
	write(1, "\n", 1);
}
