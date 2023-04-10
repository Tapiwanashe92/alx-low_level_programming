#include <stdio.h>

/**
* main - entry point
* @argv: array
* @argc: size of argv
* Return: 0
*/

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
