#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string parameter to be counted
 * Return: lenth of the string
 */

int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a  = 0; s[a] != '\0'; a++)
		count++;
	return (count);
}
