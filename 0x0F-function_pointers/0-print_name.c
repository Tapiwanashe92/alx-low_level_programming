#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @f: pointer to a function
 * @name: string
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
