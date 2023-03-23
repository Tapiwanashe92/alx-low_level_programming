#include "main.h"

/**
 * print_diagonal - prints diagonal line in the terminal
 * @n: number of lines and columns
 * Return: none
 */

void print_diagonal(int n)
{
	int l, c;

	for (l = 0; l < n; l++)
	{

		for (c = 0; c <= l; c++)
		{

			if (c != 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
