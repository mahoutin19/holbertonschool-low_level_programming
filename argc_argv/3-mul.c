#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int nbr1 = 0, nbr2 = 0;

	if (argc == 3)
	{
		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[2]);
		printf("%d\n", nbr1 * nbr2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
