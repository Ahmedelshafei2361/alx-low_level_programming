#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char as;

	for (as = 'a'; as <= 'z'; as++)
	{
		if (as == 'q' || as == 'e')
		{
			continue;
		}
		putchar(as);
	}
	putchar('\n');
	return (0);
}
