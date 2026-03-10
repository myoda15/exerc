#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 4)
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
			{
				while (av[3][j])
				{
					ft_putchar(av[3][j]);
					j++;
				}
				j = 0;
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}

/* ./a.out "hello a" "a" "nigga" */