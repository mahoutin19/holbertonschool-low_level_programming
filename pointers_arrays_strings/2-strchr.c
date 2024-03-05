#include "main.h"

/**
 * _strchr - Entry point
 * @s: the given string
 * @c: the given string
 *
 * Return: (Success) a pointer to the first occurence of c
 * ------- (Fail) return a null pointer
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		return (s + index);
	}
	return (NULL);
}
