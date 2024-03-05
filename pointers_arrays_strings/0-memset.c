#include "main.h"

/**
 *_memset - Entry point
 *@s: poined destination
 *@b: constant byte
 *@n: bytes
 *Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
