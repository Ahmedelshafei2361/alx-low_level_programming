#include "main.h"

/**
 * _print_rev_recursion - a recursive function
 * to print reverse words.
 *
 * @s: the string to be printed.
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}