#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - more headers goes there */

/**
 * main - more headers goes there
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and 0", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and less thand 6 and 0", n, m);
	return (0);

}
