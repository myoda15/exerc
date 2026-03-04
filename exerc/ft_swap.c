#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int	a;
	int	b;
	int	*x;
	int	*y;

	a = 10;
	b = 5;
	x = &a;
	y = &b;

	ft_swap(x, y);
	printf("este é o a: %d\neste é o b: %d", *x, *y);
}