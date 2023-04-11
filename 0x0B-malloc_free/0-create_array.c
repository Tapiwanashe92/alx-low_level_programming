#include <stdlib.h>
#include "main.h"

/**
* create_array - a function that creates an array of chars
* and initializes it with a specific char
* @c: char
* @size: unsigned integer
* Return: a char size
**/

char *create_array(unsigned int size, char c)
{
	unsigned int u;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == 0)
		return (NULL);
	for (u = 0; u < size; u++)
		p[u] = c;
	return (p);
}
