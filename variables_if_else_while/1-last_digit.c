#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main - more headers goes there */

/**
 * main - more headers goes there
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and 0", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and less thand 6 and 0", n, lastd);
	}
	return (0);

}
