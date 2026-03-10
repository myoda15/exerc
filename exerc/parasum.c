#include <unistd.h>
#include <stdlib.h>

static int	get_size(int n)
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
	long	nb;

	size = get_size(n);
	str = malloc(sizeof(char) * (size + 1));
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

/* 	if (!ac)
	{
		return (0);
	} */
	i = ac - 1;
	av[1] = ft_itoa(i);
	ft_putstr(av[1]);
	write(1, "\n", 1);
}