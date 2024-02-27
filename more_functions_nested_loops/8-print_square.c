#include "main.h"
#include <stdio.h>
/**
 * print_square - Prints n squares according a number of times
 * @size: The numner of square/number of times
 * Return: Always 0.
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; y < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			putchar('\n');
		}
	}
}
