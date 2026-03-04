int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	eh_palindromo(const char *str, char *yes)
{
	int	i;
	int	j;

	j = ft_strlen(yes);
	j --;
	while (yes[j])
	{
		if (str[i] != yes[j])
			return(0);
	}
	return (1);
}
#include <stdio.h>

int	main()
{
	printf("%d", eh_palindromo("manel", "lenam"));
}