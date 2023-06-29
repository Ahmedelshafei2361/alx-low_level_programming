#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: A pointer to the destination String.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the resulting string
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
