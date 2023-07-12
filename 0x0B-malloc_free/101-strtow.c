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
	char **array, *tmp;
	int count = 0;
	int len = 0;
	int i, j = 0, start, end, words;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	array = (char **)malloc(sizeof(char) * (words + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;

				tmp = (char *)malloc(sizeof(char) * (count + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';

				array[j] = tmp - count;
				j++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
		}
	array[j] = NULL;

	return (array);
}
