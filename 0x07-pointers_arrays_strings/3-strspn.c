#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @accept: character string
 * @s: character
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	int z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				break;
			}
		}
		if (accept[y] == '\0')
			return (z);
	}
	return (z);
}

