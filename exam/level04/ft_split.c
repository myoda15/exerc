#include <stdlib.h>

int	count_words(char *s, char c)
{
	int	count = 0;

	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	*word_copy(char *s, char c)
{
	char	*res;
	int	i = 0;
	int	len = 0;

	while (s[len] && s[len] != c)
		len++;
	res = malloc(i + 1);
	if (!res)
		return(NULL);
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
	char **res;
	int	i = 0;

	res = malloc(count_words(s, c) + 1);
	while(*s)
	{
		while (*s && *s == c)
			s++;
		res[i] = word_copy(s, c);
		while (*s && *s != c)
			s++;
		i++;
	}
	res[i] = NULL;
	return (res);
}

#include <stdio.h>


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