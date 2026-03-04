#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*res;
	int	size;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	i = 0;
	res = malloc(sizeof(int) * size);
	if (!res)
		return (NULL);
	while (start < end)
	{
		res[i] = start;
		i++;
		start++;
	}
	while (start > end)
	{
		res[i] = start;
		i++;
		start--;
	}
	res[i] = start;
	return (res);
}