#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: size of array
 * @c:character to store to array
 * Return: pointer to the array.
 */

char *create_array(unsigned int size, char c)

{
	unsigned int index;

	char *array;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (index = 0; index < size; index++)
				array[index] = c;
		}
	}
	return (array);
}
