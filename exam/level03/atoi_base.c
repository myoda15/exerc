int	ft_atoi_base(char *s, int base)
{
	int	i = 0;
	int	res = 0;
	int sign = 1;
	int y = 0;

	if (s[i] == '-')
	{
		i++;
		sign = -1;
	}
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			y = s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			y = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			y = s[i] - 'A' + 10;
		else
			break;
		if (y >= base)
			break;
		res = res * base + y;
		i++;
	}
	return (res * sign);
}
#include <stdio.h>


int	main(void)
{
    // ════════════════════════════════════════════
    // Testes BASE 10 (decimal normal)
    // ════════════════════════════════════════════
    printf("===== BASE 10 (Decimal) =====\n");
    printf("ft_atoi_base(\"42\", 10) = %d\n", ft_atoi_base("42", 10));
    printf("ft_atoi_base(\"-123\", 10) = %d\n", ft_atoi_base("-123", 10));
    printf("ft_atoi_base(\"0\", 10) = %d\n\n", ft_atoi_base("0", 10));
    
    // ════════════════════════════════════════════
    // Testes BASE 16 (hexadecimal)
    // ════════════════════════════════════════════
    printf("===== BASE 16 (Hexadecimal) =====\n");
    printf("ft_atoi_base(\"FF\", 16) = %d\n", ft_atoi_base("FF", 16));
    printf("ft_atoi_base(\"ff\", 16) = %d\n", ft_atoi_base("ff", 16));
    printf("ft_atoi_base(\"2A\", 16) = %d\n", ft_atoi_base("2A", 16));
    printf("ft_atoi_base(\"1A3\", 16) = %d\n", ft_atoi_base("1A3", 16));
    printf("ft_atoi_base(\"-1F\", 16) = %d\n", ft_atoi_base("-1F", 16));
    printf("ft_atoi_base(\"ABC\", 16) = %d\n", ft_atoi_base("ABC", 16));
    printf("ft_atoi_base(\"10\", 16) = %d\n\n", ft_atoi_base("10", 16));
    
    // ════════════════════════════════════════════
    // Testes BASE 2 (binário)
    // ════════════════════════════════════════════
    printf("===== BASE 2 (Binário) =====\n");
    printf("ft_atoi_base(\"1010\", 2) = %d\n", ft_atoi_base("1010", 2));
    printf("ft_atoi_base(\"11111111\", 2) = %d\n", ft_atoi_base("11111111", 2));
    printf("ft_atoi_base(\"101\", 2) = %d\n", ft_atoi_base("101", 2));
    printf("ft_atoi_base(\"-1010\", 2) = %d\n\n", ft_atoi_base("-1010", 2));
    
    // ════════════════════════════════════════════
    // Testes BASE 8 (octal)
    // ════════════════════════════════════════════
    printf("===== BASE 8 (Octal) =====\n");
    printf("ft_atoi_base(\"77\", 8) = %d\n", ft_atoi_base("77", 8));
    printf("ft_atoi_base(\"100\", 8) = %d\n", ft_atoi_base("100", 8));
    printf("ft_atoi_base(\"17\", 8) = %d\n", ft_atoi_base("17", 8));
    printf("ft_atoi_base(\"-12\", 8) = %d\n\n", ft_atoi_base("-12", 8));
    
    // ════════════════════════════════════════════
    // Testes BASE 4
    // ════════════════════════════════════════════
    printf("===== BASE 4 =====\n");
    printf("ft_atoi_base(\"123\", 4) = %d\n", ft_atoi_base("123", 4));
    printf("ft_atoi_base(\"33\", 4) = %d\n", ft_atoi_base("33", 4));
    printf("ft_atoi_base(\"10\", 4) = %d\n\n", ft_atoi_base("10", 4));
    
    // ════════════════════════════════════════════
    // Testes com caracteres inválidos
    // ════════════════════════════════════════════
    printf("===== Testes com inválidos =====\n");
    printf("ft_atoi_base(\"12G\", 16) = %d (para no 'G')\n", ft_atoi_base("12G", 16));
    printf("ft_atoi_base(\"125\", 4) = %d (para no '5')\n", ft_atoi_base("125", 4));
    printf("ft_atoi_base(\"1a2\", 10) = %d (para no 'a')\n", ft_atoi_base("1a2", 10));
    
    return (0);
}