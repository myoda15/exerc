#include <stdlib.h>

int	get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	nb;
	int	lenght;

	lenght = get_size(n);
	str = malloc(get_size(n) /*ou o lenght*/ + 1);
	nb = n;
	if (!str)
		return (NULL);
	str[lenght] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--lenght] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	int	n = -234342686;
	char *str = ft_itoa(n);
	printf("original: %i\ndepois: %s", n, str);
}