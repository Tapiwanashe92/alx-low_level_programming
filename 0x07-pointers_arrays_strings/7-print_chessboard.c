#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: dimensional array
 */

void print_chessboard(char (*a)[8])
{
	int p;
	int q;

	for (p = 0; p < 8; p++)
	{
		for (q = 0; q < 8; q++)
		{
			_putchar(a[p][q]);
		}
		_putchar('\n');
	}
}
