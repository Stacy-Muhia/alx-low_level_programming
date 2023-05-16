#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * count_word - helper function to count the number of words in a string
 * @s: input string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int x, c, w;

	x = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			w++;
		}
	}

	return (w);
}
/**
 ***strtow - splits a string into words
 *@str: string to split
 *
 *Return: pointer to an array of strings(Success), else NULL(fail)
 */
char **strtow(char *str)
{
	char **word, *tkn;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	word = (char **) malloc(sizeof(char *) * (words + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tkn = (char *) malloc(sizeof(char) * (c + 1));
				if (tkn == NULL)
					return (NULL);
				while (start < end)
					*tkn++ = str[start++];
				*tkn = '\0';
				word[k] = tkn - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	word[k] = NULL;

	return (word);
}
