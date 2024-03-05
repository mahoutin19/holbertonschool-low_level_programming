#include <stdio.h>
#include "main.h"

/**
* print_diagsums - sum of the two diagonals
* @a: array
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int b1 = 0;
	int b2 = 0;
	int index = 0;

	while (index < size)
	{
		b1 += a[index * (size + 1)];
		b2 += a[(index + 1) * (size - 1)];
		index++;
	}
	printf("%d, ", b1);
	printf("%d", b2);
	printf("\b");
}
