#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: function parameter to be checked
 * Return: returns 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
