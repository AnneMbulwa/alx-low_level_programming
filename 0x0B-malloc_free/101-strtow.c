#include "main.h"
#include <stdlib.h>

int count_word(char *s);
/**
 *count_word - helps count numbers of words in string
 *@s: string
 *Return: number of words
 */
int count_word(char *s)
{
	int flag, count, w;

	flag = 0;
	w = 0;
	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 *strtow - splits a string in words
 *@str: string
 *Return: 0(NULL) or pointer to array of string
 */
char **strtow(char *str)
{
	char **words, *word_s;
	int count = 0;
	int len = 0;
	int i, j, start, end, word;

	while (*(str + len))
		len++;
	word = count_word(str);
	if (word == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char) * (word + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;

				word_s = malloc(sizeof(char) * (count + 1));
				if (word_s == NULL)
					return (NULL);
				while (start < end)
					*word_s++ = str[start++];
			*word_s = '\0';

			words[j] = word_s - count;
			j++;
			}
		}
		else if (count++ == 0)
			start = i;
		}
		words[j] = NULL;

		return (words);
}
