#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	char	*str;

	i = 0;
	str = av[1];
	if (ac == 2)
	{
		while(str[i] != '\0')
		{
			if (str[i] < 'A' || str[i] > 'Z')
			{
				putchar(str[i]);
				i++;
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				putchar('_');
				str[i] += 32;
				putchar(str[i]);
				i++;
			}
		}
	}
	putchar('\n');
}