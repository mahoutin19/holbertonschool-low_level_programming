#include "main.h"

/**
*print_array - print n element of arraiy
*@a: Array of integers
*@n: Number of elements of the array to be printed
*Return:Always 0.
*/


void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
	if (inc != n - 1)
		printf("%d, ", a[inc]);
	else
		printf("%d", a[inc]);
	}
	printf("\n");
}
