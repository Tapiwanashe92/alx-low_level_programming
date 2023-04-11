#include <stdlib.h>
#include "main.h"

/**
* str_concat - a function that concatenates two strings
* @s1: holds the first string
* @s2: holds the second string
* Return: the pointer to a string
*/

char *str_concat(char *s1, char *s2)
{
	int m;
	int n;
	int o;
	char *p;

	m = 0;
	n = 0;
	o = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[m])
		m += 1;
	while (s2[n])
		n += 1;
	p = malloc((m + n) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	while (*s1)
	{
		p[o] = *s1++;
		o += 1;
	}
	while (*s2)
	{
		p[o] = *s2++;
		o += 1;
	}
	return (p);
}
