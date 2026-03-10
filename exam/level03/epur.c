#include <unistd.h>

int	is_space(char s)
{
	return(s == 9 || s == 32);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			while (!is_space(av[1][i]))
				write(1, &av[1][i++], 1);
			while (is_space(av[1][i]))
				i++;
			if (av[1][i] != '\0')
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}