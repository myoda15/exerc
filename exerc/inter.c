#include <unistd.h>

/* int	ft_strcmp(char *s1, char *search)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == search[i])
			return (1);
		i++;
	}
	i = 0;
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (ft_strcmp(av[1], av[2]) == 1)
			{
				write (1, &av[1][i], 1);
			}
			i++;
		}
	}
} */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int j;
	int k;
	int found;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		j = 0;
		found = 0;
		// verifica se o char existe na segunda string
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				found = 1;
				break;
			}
			j++;
		}
		// verifica se já foi impresso antes
		k = 0;
		while (k < i && av[1][k] != av[1][i])
			k++;
		if (found && k == i)
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
