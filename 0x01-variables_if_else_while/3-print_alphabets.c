#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * and in uppercase too
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char as;
	char sa;

	for (as = 'a'; as <= 'z'; as++)
	{
		putchar(as);
	}
	for (sa = 'A'; sa <= 'Z'; sa++)
	{
		putchar(sa);
	}
	putchar('\n');
	return (0);
}
