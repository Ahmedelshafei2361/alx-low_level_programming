#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: This function uses two nested loops to iterate over
 * the hours and minutes of the day. The _putchar function is used
 * to print each character of the output.
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
	for (m = 0; m < 60; m++)
	{
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(':');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		_putchar('\n');
		}
	}
}
/**
 * main - prints every minute of the day in
 * 00:00 formula
 *
 * Return: 0
 */
int main(void)
{
	jack_bauer();

	return (0);
}
