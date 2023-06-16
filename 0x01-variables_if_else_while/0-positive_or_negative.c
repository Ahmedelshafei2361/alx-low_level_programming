#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to the variable n each time it is executed
 * and prints whether the number stored in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x > 0)
	{
		printf("%i is positive", n);
	}
	else if (n == 0)
	{
		printf("%i is zero", n);
	}
	else
	{
		printf("%i is negative", n);
	}
	return (0);
}
