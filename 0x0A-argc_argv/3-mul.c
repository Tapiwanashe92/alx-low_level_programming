#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
* */

int main(int argc, char *argv[])
{
	int w, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (w = 1; w < argc; w++)
		mul *= atoi(argv[w]);
	printf("%d\n", mul);
	return (0);
}
