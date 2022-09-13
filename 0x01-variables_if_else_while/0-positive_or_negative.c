#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determine if number is negative or negative
 *
 * Description: program will assign a random number to the variable n each time
 *
 * Return: Always 0 success
 */

int  main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
