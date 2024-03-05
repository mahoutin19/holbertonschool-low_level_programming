#include "stdio.h"
#include "main.h"
#include <string.h>

/**
 *_strpbrk - Locates the first occurrence in the string
 *@s: input
 *@accept: input
 *Return: Always 0 (Sucess)
 */

char *_strpbrk(char *s, char *accept)
{
	int index, n;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[index] == accept[n])
				return (s + index);
		}
	}
	return (NULL);
}
