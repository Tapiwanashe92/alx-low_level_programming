#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a new string
* @str: holds the string
* Return: the pointer
**/

char *_strdup(char *str)
{
	char *p;
	int e;
	int f;

	f = 0;
	e = 0;
	if (str == NULL)
		return (NULL);
	while (str[e])
		e += 1;
	p = malloc(e * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);
	while (*str)
	{
		p[f] = *str;
		str++;
		f += 1;
	}
	p[f] = *str;
		return (p);
}
