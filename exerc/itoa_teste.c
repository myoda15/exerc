#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	len;

	len = count(n);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[--len] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}


int	main()
{
	int n = 2313;
	char *s = ft_itoa(n);
	printf("%s", s);

}