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
int n = 0;
srand(time(0));
	n = rand() - RAND_MAX / 2;
		printf("%d is", n);
if (n > 0)
		 printf("%d is positive\n", n);
else if (n == 0)
                printf("%d is zero\n", n);
else
        printf("%d is negative\n", n);
return (0);
}
