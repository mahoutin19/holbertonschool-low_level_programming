#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicaced a string
 * @str: the string to duplicate
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	int a = 0, index = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[index])
	{
		index++;
	}

	s = malloc((sizeof(char) * index) + 1);

	if (s == NULL)
		return (NULL);

	while (a < index)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
