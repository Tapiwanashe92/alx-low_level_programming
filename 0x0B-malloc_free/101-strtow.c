#include <stdlib.h>
#include "main.h"

/**
 * get_words_count - Computes the number of words in a string
 * @str: The source string
 * @count: The number of words
 */

void get_words_count(char *str, int *count)
{
	int l, m;
	char prev_char = ' ';

	*count = 0;
	for (l = 0; str != NULL && *(str + l) != '\0'; l++)
	{
		if (*(str + l) != ' ' && prev_char == ' ')
		{
			*count += 1;
			m = 0;
		}
		if (*(str + l) != ' ')
			m++;
		prev_char = *(str + l);
	}
}

/**
 * get_word_length - Computes the length of a word
 * @str: The source string beginning with the word
 * @length: The length of the word
 */

void get_word_length(char *str, int *length)
{
	*length = 0;
	if (str == NULL || (str != NULL && (*str == '\0' || *str == ' ')))
		return;
	while (*(str + *length) != '\0' && *(str + *length) != ' ')
		*length += 1;
}

/**
 * strtow - Splits a string into words (array of strings)
 * @str: The string to split
 *
 * Return: The pointer to the string array or NULL if memory allocation
 * fails or str is an empty string ("") or str is NULL
 */

char **strtow(char *str)
{
	char **words;
	int p, q, r, len, words_count;
	char prev_char = ' ';

	get_words_count(str, &words_count);
	if (str == NULL || *str == '\0' || words_count == 0)
		return (NULL);
	words = malloc((sizeof(char *) * (words_count + 1)));
	if (words)
	{
		q = -1;
		r = 0;
		prev_char = ' ';
		for (p = 0; *(str + p) != '\0'; p++)
		{
			if (*(str + p) != ' ')
			{
				if (prev_char == ' ')
				{
					q++;
					get_word_length(str + p, &len);
					*(words + q) = malloc((sizeof(char) * (len + 1)));
					if (*(words + q) == NULL)
						return (NULL);
					r = 0;
				}
				*(*(words + q) + r) = *(str + p);
				r++;
				if (*(str + p + 1) == '\0' || *(str + p + 1) == ' ')
					*(*(words + q) + r) = '\0';
			}
			prev_char = *(str + p);
		}
		*(words + q + 1) = NULL;
		return (words);
	}
	return (NULL);
}
