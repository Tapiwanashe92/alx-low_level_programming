#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int cent, u;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	u = 0;
	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
			u += 1;
		}
		else if (cent >= 10)
		{
			cent -= 10;
			u += 1;
		}
		else if (cent >= 5)
		{
			cent -= 5;
			u += 1;
		}
		else if (cent >= 2)
		{
			cent -= 2;
			u += 1;
		}
		else
		{
			cent -= 1;
			u += 1;
		}
	}
	printf("%d\n", u);
	return (0);
}

