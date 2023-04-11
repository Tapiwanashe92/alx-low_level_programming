#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int t, u, s = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		for (u = 0; av[t][u]; u++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		for (u = 0; av[t][u]; u++)
		{
			str[s] = av[t][u];
			s++;
		}
		if (str[s] == '\0')
		{
			str[s++] = '\n';
		}
	}
	return (str);
}
