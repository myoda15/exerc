#include <stdio.h>
#include <stdlib.h>

char *ft_expand_range(char *str)
{
    char *result;
    int size;
    int i, j;
    char inicio, fim;
    
    // 1. Validações
    if (!str || !*str)
        return (NULL);
    
    // 2. Encontrar inicio e fim
    i = 0;
    inicio = str[i];
    while (str[i] && str[i] != '-')
        i++;
    if (str[i] == '-')
        i++;
    fim = str[i];
    
    // 3. Calcular tamanho
    if (inicio > fim)
        size = inicio - fim + 1;  // Decrescente
    else
        size = fim - inicio + 1;  // Crescente
    
    // 4. Alocar
    result = malloc(size + 1);
    if (!result)
        return (NULL);
    
    // 5. Expandir
    j = 0;
    if (inicio <= fim)  // Crescente
    {
        while (inicio <= fim)
            result[j++] = inicio++;
    }
    else  // Decrescente
    {
        while (inicio >= fim)
            result[j++] = inicio--;
    }
    
    result[j] = '\0';
    return (result);
}

int	main()
{
	printf("%s", ft_expand_range("A-z"));
}