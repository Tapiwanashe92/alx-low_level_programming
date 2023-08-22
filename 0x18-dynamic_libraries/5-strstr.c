#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @needle: character string
 * @haystack: character string
 * Return:  a pointer to the beginning of the located substring, or NULL
 * if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (c = a, b = 0; needle[b] != '\0'; b++, c++)
		{
			if (needle[b] != haystack[c] || haystack[c] == '\0')
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
	}
	return (0);
}
