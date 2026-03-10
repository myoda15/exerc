#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			if (av[j][0] >= 'a' && av[j][0] <= 'z')
				av[j][0] -= 32;
			else if ((av[j][i - 1] == ' ' || av[j][i - 1] == '\t') && (av[j][i] >= 'a' && av[j][i] <= 'z'))
				av[j][i] -= 32;
			else if ((av[j][i - 1] != ' ' || av[j][i - 1] != '\t') && (av[j][i] >= 'A' && av[j][i] <= 'Z'))
				av[j][i] += 32;
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, " ", 1);
		j++;
	}
	write(1, "\n", 1);
}