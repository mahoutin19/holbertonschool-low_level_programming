i#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/**
 * main - Prints a text according number 
 * Return: Always (Success)
 */

int main(void)

	{
		int n,lastd;
		lastd = n % 10;

		if (lastd > 5)
		{
			printf("Lastd digit of %d is %d and is greater than 5\n", n, lastd);
		}
		else if (last == 0)
		{
			printf("Lastd digit of %d is %d an is 0\n", n, lastd);
		}
		else if (lastd < 6 && lastd != 0)
		{
			printf("Lastd digit of %d is %d and is less than 6 and not 0\n", n, lastd);
		}
		return (0);
	}
