#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int v, w, add = 0;

	for (v = 1; v < argc; v++)
	{
		if (argv[v][0] == '-')
		{
			for (w = 1; argv[v][w] != '\0'; w++)
			{
				if (isdigit(argv[v][w]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		else
		{
			for (w = 0; argv[v][w] != '\0'; w++)
			{
				if (isdigit(argv[v][w]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		add += atoi(argv[v]);
	}
	printf("%d\n", add);
	return (0);
}

