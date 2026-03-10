#include <stdio.h>

int	is_power_of_2(int n)
{
	if (n == 0)
		return (0);
	while(n > 1)
	{
		if (n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}

int	main()
{
	int n = 0;
	printf("%d", is_power_of_2(n));
}