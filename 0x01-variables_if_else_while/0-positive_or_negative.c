#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Assigns a ramdom number to the variable n
 * and prints whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
	n = rand() - RAND_MAX / 2;
		printf("%d is", n);
	else if (n > 0)
		printf("%d positive\n", n);
	else if (n == 0)
		printf("%d zero \n", n);
	else
		printf("negative\n", n);
	return (0);
}
