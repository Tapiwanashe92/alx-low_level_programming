#include "main.h"
/**
 * _memset - function that fills the first n bytes of memory area
 * @b: char
 * @n: int
 * @s: char
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
