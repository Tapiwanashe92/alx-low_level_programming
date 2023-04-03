#include "main.h"

/**
 * _strchr - a function that locates a character in astring
 * @c: char in s
 * @s: string
 * return: a pointer to first occurrence of character or NULL
 * if character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	if (s[x] == c)
		return (s + x);
	else
		return ('\0');
}
