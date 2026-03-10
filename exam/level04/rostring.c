#include <unistd.h>
#include <stdio.h>

int	is_spsace(char c)
{
	return (c == 32 || c == 9);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	start;
	int	end;
	int	first = 1;

	if (ac > 1)
	{
		while (is_space(av[1][i]))
			i++;
		start = i;
		while (av[1][i] && !is_space(av[1][i]))
			i++;
		end = i;
		while (is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (!is_space(av[1][i]))
			{
				if (!first)
					write(1, " ", 1);
				first = 0;
				while (av[1][i] && !is_space(av[1][i]))
					write(1, &av[1][i++], 1);
			}
			else
				i++;
		}
		if (start < end)
		{
			if (!first)
				write(1, " ", 1);
			write(1, av[1] + start, end - start);
		}
	}
	write(1, "\n", 1);
	return (0);
}