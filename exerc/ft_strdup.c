/* #include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(strlen(str) + 1);
	while(str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	i++;
	dup[i] = '\0';
	return(dup);
} */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int	i;
	char *dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof (char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}


int	main()
{
	char	*str = "ola";
	printf("%s\n", str);
	ft_strdup(str);
	printf("%s", str);
}