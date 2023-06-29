#include "main.h"

/*
 * main - concatenate two strings
 * into the first string
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i;

	strcat(dest, src);

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
}
