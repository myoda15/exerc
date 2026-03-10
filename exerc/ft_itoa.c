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
	int		size;
	char	*str;
	int		nb;

	size = get_size(n);
	str = malloc(size + 1);
	nb = n;
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--size] = (nb % 10) + '0';
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