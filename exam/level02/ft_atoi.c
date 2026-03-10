#include <stdio.h>

int	ft_atoi(char *s)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	while(s[i] >= 9 && s[i] <= 13)
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * sign);
}

int	main()
{
	char *s = "-456798";
	int	i = ft_atoi(s);
	printf("%d", i);
}