#include "main.h"

/**
 * _memcpy - a function that copies bytes from memory area
 * @src: char
 * @n: int
 * @dest: char
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
