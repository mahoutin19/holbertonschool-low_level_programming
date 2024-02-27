#include "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)
{
int nbr;
for (nbr = 0; nbr < 9; nbr++)
{
if ((nbr == 2) || (nbr == 4))
{
continue;
}
_putchar(nbr);
}
_putchar('\n');
}
