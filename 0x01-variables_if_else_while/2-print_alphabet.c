#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char as;

	for (as = 'a'; as <= 'z'; as++)
	{
		putchar(as);
	}
	putchar('\n');

	return (0);
}
