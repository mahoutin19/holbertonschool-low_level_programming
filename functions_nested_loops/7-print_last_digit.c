#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	putchar('0' + last);
	putchar('\n');;
	return (last);
}

