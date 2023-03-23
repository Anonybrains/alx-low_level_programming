#include "main.h"
/**
 * print_numbers- a function that prints 0-9 with a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char x;

	for (x = '0' ; x <= '9' ; x++)
	{
		_putchar(x);
	_putchar('\n');
	}
}
