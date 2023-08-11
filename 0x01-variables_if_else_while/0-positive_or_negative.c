#include <stdlib.h>
#include <stdlib.h>
#include <tme.h>
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
		printf("%d positive\n");
	else if (n == 0)
		printf("%d zero \n");
	else
		printf("negative\n");
	return (0);
}
