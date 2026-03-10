#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *s)
{
	int	i;
	int res;

	res = 0;
	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	temp;

	if (ac == 3)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[2]);
		while (b != 0)
		{
			temp = b;
			b = a % b;
			a = temp;
		}
		printf("%d", a);
	}
	write(1, "\n", 1);
}
