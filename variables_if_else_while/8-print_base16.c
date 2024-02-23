#include <stdio.h>

/**
 * main - main function
 *
 * Return: alaways (0)
 */

int main(void)

{
	char chffr;
	char ltr;

	for (chffr = '0'; chffr <= '9'; chffr++)
	{
		putchar(chffr);
	}

	for (ltr = 'a'; ltr <= 'f'; ltr++)

	{
		putchar(ltr);
	}
	putchar('\n');

	return (0);
}
