#include <stdio.h>
#include <stdlib.h>
#include <time.>

int main() {

	srand(time(NULL));
	int n = rand() % (RAND_MAX + 1);
	printf("The number %d is ", n);

	if (n > 0)
	{
	 printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	 printf("%d is zero\n", n);
	}
	else
	{
        printf("%d is negetive\n", n)
	}
	return (0);
	
}
