#include "main.h"
#include <stdio.h>

/**
* print_diagsums - a function prints the sum of the two diagonals of a
*square matrix of integers
* @a: array
* @size: size of array
**/

void print_diagsums(int *a, int size)
{
	int y;
	int z;
	int sum4 = 0;
	int sum5 = 0;

	for (y = 0; y < size * size; y += (size + 1))
	{
		sum4 += a[y];
	}
	for (z = size - 1; z < size * size - (size - 1); z += (size - 1))
	{
		sum5 += a[z];
	}
	printf("%d, %d\n", sum4, sum5);
}
