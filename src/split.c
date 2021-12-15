#include "../push_swap.h"

static size_t word_len(char const *s, char c) {
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_substr(char *s, unsigned int start, size_t len) {
	char	*substring;
	size_t	i;

	i = 0;
	substring = (char *)malloc(sizeof(char) * len + 1);
	if (substring == NULL)
		return (NULL);
	if (start > custom_strlen((char *)s))
		return (substring);
	while (i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

static size_t word_count(char const *s, char c) {
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	while (s[i + 1] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c))
			counter++;
		i++;
	}
	if (s[i + 1] == '\0' && s[i] != c)
		counter++;
	return (counter);
}

static char	**free_all(char ***result, size_t counter) {
	size_t	i;

	if (counter > 0)
		i = counter - 1;
	else
		i = 0;
	while (i >= 0)
	{
		free(*result[i]);
		i--;
	}
	free(*result);
	return (NULL);
}

static char	**if_empty_string(void) {
	char	**result;

	result = (char **)malloc(sizeof(char *) * 1);
	result[0] = NULL;
	return (result);
}

char	**split(char *s, char c) {
	size_t	i = 0;
	size_t	counter = 0;

	if (custom_strlen(s) == 0)
		return (if_empty_string());
	char	**result = (char **)calloc((word_count(s, c) + 100), sizeof(char *));
	while (i < custom_strlen(s))
	{
		if (s[i++] != c)
		{
			result[counter] = ft_substr(s, i - 1, word_len(s + i - 1, c));
			if (result[counter] == NULL)
				return (free_all(&result, counter));
			i = i - 1 + word_len(s + i - 1, c);
			counter++;
		}
	}
	return (result);
}

void destroy_splitted(char **arr) {
	for (int i = 0; arr[i]; i++) {
		free(arr[i]);
		arr[i] = NULL;
	}
	free(arr);
	arr = NULL;
}