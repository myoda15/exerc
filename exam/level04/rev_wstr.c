#include <unistd.h>

int	space(char c)
{
	return (c == 32 || c == 9);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	end = 0;
	int	start = 0;
	int	first = 1;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && space(av[1][i]))
				i--;
			end = i;
			while (i >= 0 && !space(av[1][i]))
				i--;
			start = i + 1;
			if (start <= end)
			{
				if (!first)
					write(1, " ", 1);
				first = 0;
				while (start <= end)
					write(1, &av[1][start++], 1);
			}
		}
	}
	write(1, "\n", 1);
}