#include <stdio.h>

int	count(char *str)
{
	int	i;
	int count;

	count = 0;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == ' ')
			count++;
		i++;
	}
	count++;
	return (count);
}

int	main()
{
	char	*str = " ";

	printf("%d", count(str));
}
