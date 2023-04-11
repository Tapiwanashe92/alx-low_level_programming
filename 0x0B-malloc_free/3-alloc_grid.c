#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - a function that returns a pointer to 2 dimensional array
* of integer
* @width: integer
* @height: integer
* Return: return a pointer to the array otherwise return NULL
**/

int **alloc_grid(int width, int height)
{
	int **p;

	int x;

	int y;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		p[x] = malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
			{
				free(p[x]);
			}
			free(p);
			return (NULL);
		}
	}
	for (x = 0; y < width; y++)
		p[x][y] = 0;
	return (p);
}
