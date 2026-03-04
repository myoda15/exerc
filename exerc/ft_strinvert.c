# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strinvert(char *str)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = ft_strlen(str);
	res = malloc(sizeof(char) * (j + 1));
	if (!res)
		return (NULL);
	res[j] = '\0';
	while (str[i])
	{
		res[--j] = str[i];
		i++;
	}
	return (res);
}


int main()
{
    char entrada[100];

    printf("Escreve uma palavra: ");
    scanf("%99s", entrada);

    char *invertida = ft_strinvert(entrada);
    if (invertida)
    {
        printf("Invertida: %s\n", invertida);
        free(invertida);
    }

    return 0;
}
