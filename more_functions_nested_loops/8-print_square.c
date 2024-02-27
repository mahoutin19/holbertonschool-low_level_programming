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

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
