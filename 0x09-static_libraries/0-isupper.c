#include "main.h"

/**
 * _isupper - checking for uppercase characters
 * @c: the function parameter to be checked
 * Return: 1 if succes else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
