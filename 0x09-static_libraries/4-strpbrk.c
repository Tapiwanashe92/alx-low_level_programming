#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @accept: string
 * @s: string
 * Return: a pointer to the byte in s
 *  that matches one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int m;
	int n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
				return (s + m);
		}
	}
	return (0);
}
