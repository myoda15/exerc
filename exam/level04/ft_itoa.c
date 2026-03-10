#include <stdlib.h>

int	get_size(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;

	len = get_size(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	int		n = -54364;
	char *str = ft_itoa(n);
	printf("%s", str);
}