#include <stdlib.h>
#include <stdio.h>

int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	*word_copy(char *s, char c)
{
	int	i;
	int	len;
	char	*res;

	i = 0;
	len = 0;
	while (s[len] != c && s[len])
		len++;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *s, char c)
{
	int	i;
	char	**res;

	i = 0;
	res = malloc(1000);
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		res[i] = word_copy(s, c);
		while (*s && *s != c)
			s++;
		i++;
	}
	res[i] = NULL;
	return (res);
}


int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello world 42", ' ');
	
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}