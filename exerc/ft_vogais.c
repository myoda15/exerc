#include <unistd.h>

void    ft_vogais(char *str)
{
    int  i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'o' || str[i] == 'O')
            i++;
        else
        {
            write(1, &str[i], 1);
            i++;
        }
    }
}

int main()
{
    char    *str = "olaaa";

    ft_vogais(str);
}