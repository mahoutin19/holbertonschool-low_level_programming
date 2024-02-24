#include "main.h"

/**
 * print_alphabet - Make the alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		_putchar(ltr);
	}
	_putchar('\n');
}
