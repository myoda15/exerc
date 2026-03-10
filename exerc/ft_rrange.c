#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	i;
	int	size;

	i = 0;
	if (start < end)
		size = end - start + 1;
	else
		size = start - end + 1;
	res = malloc(sizeof(int) * size);
	while (start < end)
	{
		res[i] = end;
		end--;
		i++;
	}
	while (start > end)
	{
		res[i] = end;
		end++;
		i++;
	}
	res[i] = end;
	return (res);
}

#include <stdio.h>

int	*ft_rrange(int start, int end);

int	main(void)
{
    int	*result;
    int	i;
    int	size;

    // Teste 1: crescente
    printf("ft_rrange(1, 3):\n");
    result = ft_rrange(1, 3);
    size = 3;
    i = 0;
    while (i < size)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n\n");
    free(result);

    // Teste 2: decrescente
    printf("ft_rrange(5, 2):\n");
    result = ft_rrange(5, 2);
    size = 4;
    i = 0;
    while (i < size)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n\n");
    free(result);

    // Teste 3: igual
    printf("ft_rrange(0, 0):\n");
    result = ft_rrange(0, 0);
    size = 1;
    printf("%d\n\n", result[0]);
    free(result);

    // Teste 4: negativos
    printf("ft_rrange(-1, 2):\n");
    result = ft_rrange(-1, 2);
    size = 4;
    i = 0;
    while (i < size)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
    free(result);

    return (0);
}