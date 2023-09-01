#include "main.h"
/**
 * _isalpha - prints alphabets in both lower and upprercase
 * @c: parameter to be checked
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
