#include "main.h"

/**
 *print_chessboard - Entry point
 * @a: array
 *Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int index, n;

	for (index = 0; index < 8; index++)
	{
		for (n = 0; n < 8; n++)

			_putchar(a[index][n]);
		_putchar('\n');
	}
}
