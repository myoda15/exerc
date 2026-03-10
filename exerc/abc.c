#include <unistd.h>

void	aplhabet(char c)
{
	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

#include <stdio.h>

int	main()
{
	char c;

	aplhabet(c);
}