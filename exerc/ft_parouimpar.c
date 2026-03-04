#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char     *par(char    *str)
{
    int j;
    j = ft_strlen(str);
    if (str[j] == 0 || str[j] == 2 || str[j] == 4 || str[j] == 6 || str[j] == 8)
        return("PAR");
    return ("IMPAR");
}

int main(void)
{
    char numero[100]; // buffer para armazenar o número

    printf("Insere um número: ");
    scanf("%s", numero); // lê o número como string

    printf("O número é %s.\n", par(numero));

    return 0;
}