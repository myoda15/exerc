#include <stdlib.h>
#include <stdio.h>

int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
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

char	*word_copy(const char *s, char c)
{
	int	i;
	int	len;
	char	*copy;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *s, char c)
{
	int	j;
	char	**new;

	j = 0;
	new = malloc(sizeof(char *) * count_words(s, c) + 1);
	if (!new)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		new[j] = word_copy(s, c);
		while (*s != c && *s)
			s++;
		j++;
	}
	new[j] = NULL;
	return (new);
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