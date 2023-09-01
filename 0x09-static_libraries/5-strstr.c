#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *chaystack;
	char *kneedle;

	while (*haystack != '\0')
	{
		chaystack = haystack;
		kneedle = needle;

	while (*haystack != '\0' && *kneedle != '\0' && *haystack == *kneedle)
	{
		haystack++;
		kneedle++;
	}
	if (!*kneedle)
		return (chaystack);
	haystack = chaystack + 1;
	}
	return (0);
}
