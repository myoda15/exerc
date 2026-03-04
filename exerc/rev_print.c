#include <unistd.h>
#include <string.h>

/* int	ft_strlen(char *s)
{
	int	i;

	while (s[i])
		i++;
	return (i);
}

void	rev(char *s)
{
	int	i;

	i = strlen(s) - 1;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
}

int	main()
{
	char	*s = "oi";
	rev(s);
} */



int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
		return write(1, "\n", 1);
	i = ft_strlen(av[1]) - 1;
	while (i >= 0)
	{
		ft_putchar(av[1][i]);
		i--;
	}
	write(1, "\n",1);
}
