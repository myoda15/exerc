#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int	res;

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res);
}

void	print_hex(int n)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	main()
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
	}
	write (1, "\n", 1);
}