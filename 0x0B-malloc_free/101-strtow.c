#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - find number of words in string
 *
 * @s: string
 *
 * Return: number of words in string
 **/
int word_count(char *s)
{
	int i, num_words = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				num_words++;
		}
		else if (i == 0)
			num_words++;
	}
	num_words++;
	return (num_words);
}
/**
 * strtow - create an array of words from string
 *
 * @str: string
 *
 * Return: pointer to strings, NULL if fails
 **/
char **strtow(char *str)
{
	int i, k, j, l, num_words = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = word_count(str);
	if (num_words == 1)
		return (NULL);
	w = (char **)malloc(num_words * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[num_words - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for  (k = 0; k < wc; k++)
					free(w[k]);
				free(w[num_words - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
