#include <unistd.h>

int	main(int ac, char **av)
{
    int	i;
    int	j;
    int	start_word;

    if (ac < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    j = 1;
    while (j < ac)
    {
        i = 0;
        start_word = 1;
        while (av[j][i])
        {
            if (av[j][i] >= 'a' && av[j][i] <= 'z')
            {
                if (start_word)
                    av[j][i] -= 32;
                start_word = 0;
            }
            else if (av[j][i] >= 'A' && av[j][i] <= 'Z')
            {
                if (!start_word)
                    av[j][i] += 32;
                start_word = 0;
            }
            else if (av[j][i] == ' ' || av[j][i] == '\t')
                start_word = 1;
            write(1, &av[j][i], 1);
            i++;
        }
        if (j < ac - 1)
            write(1, "\n", 1);
        j++;
    }
    write(1, "\n", 1);
    return (0);
}