#include <stdio.h>

/**
 * main - main function
 *
 * Return: alaways (0)
 */

int main(void)
{
	int nbre = '0';

	while (nbre <= '9')
	{
		putchar(nbre);
		nbre++;
	}
	putchar('\n');

	return (0);

}
