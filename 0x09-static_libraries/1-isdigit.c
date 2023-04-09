#include "main.h"

/**
 * _isdigit - returns 1 if c is a digit
 * @c: takes in character
 * Return: 0 for otherwise, 1 for digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
