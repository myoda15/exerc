#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char	*str;

	i = 0;
	str = av[1];
	if (ac == 2)
	{
		while (str[i])
		{
			while(str[i] >= 'a' && str[i] <= 'z')
			{
				write(1, &str[i], 1);
				i++;
			}
			if (str[i] == '_')
			{
				i++;
				str[i] -= 32;
				write(1, &str[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}