#include <unistd.h>
#include "main.h"

/**
 * _putchar - write character c
 * @c: The character to print
 * Return: On Success 1
 * On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
