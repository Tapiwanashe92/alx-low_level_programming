#include <stdio.h>

/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
*/

int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
		printf("%s\n", argv[z]);
	return (0);
}
