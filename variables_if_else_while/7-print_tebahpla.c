#include <stdio.h>

/**
 * main - main function
 *
 * Return: alaways (0)
 */

int main(void)
{
	char ltr = 'z';

	while (ltr >= 'a')
	{
		putchar(ltr);
		ltr--;
	}
	putchar('\n');

	return (0);

}
