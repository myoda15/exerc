#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			if ((av[j][i] >= 'a' && av[j][i] <= 'z') || (av[j][i] >= 'A' && av[j][i] <= 'Z'))
			{
				if ((av[j][i + 1] != ' ' && av[j][i + 1] != '\t' && av[j][i + 1] != '\0') && (av[j][i] >= 'A' && av[j][i] <= 'Z'))
					av[j][i] += 32;
				else if ((av[j][i + 1] == ' ' || av[j][i + 1] == '\t' || av[j][i + 1] == '\0') && (av[j][i] >= 'a' && av[j][i] <= 'z'))
					av[j][i] -= 32;
			}
			write(1, &av[j][i++], 1);
		}
		if (j < ac - 1)
			write(1, "\n", 1);
		j++;
	}
	write(1, "\n", 1);
}