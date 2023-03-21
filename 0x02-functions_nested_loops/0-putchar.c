#include "main.h"
/**
 * main - print "_putchar" followed by a new line
 * Description: you are not allowed to include standard libraries
 * Return: 0
 */
int main(void)
{
	char holberton[] = "_putchar";
	int i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
