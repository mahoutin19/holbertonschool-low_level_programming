#include <stdio.h>

/**
 * main - main function
 *
 * Return: alaways (0)
 */

int main(void)

{
	char chffr = '0';
	char ltr = 'a';

	while (chffr <= '9')
	{
		putchar(chffr);
		chffr++;
	}

	while (ltr <= 'f')

	{
		putchar(ltr);
		ltr++;
	}

	return (0);
}
