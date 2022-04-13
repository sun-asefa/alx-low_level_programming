#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints a number and whether it is positive, negative or zero.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero \n");
	}
	else
		printf("is negative\n");
	printf("the number is %d:", n);
return (0);
}
