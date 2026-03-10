#include <unistd.h>

int	main(int ac, char **av)
{
	int	start;
	int	end;
	int	i;
	int	first;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i++;
		i--;
		first = 1;
		while (i >= 0)
		{
			while (i >= 0 && av[1][i] == ' ')
				i--;
			end = i;
			while (i >= 0 && av[1][i] != ' ')
				i--;
			start = i + 1;
			if (start <= end)
			{
				if (!first)
					write(1, " ", 1);
				first = 0;
				while (start <= end)
				{
					write(1, &av[1][start], 1);
					start++;
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
