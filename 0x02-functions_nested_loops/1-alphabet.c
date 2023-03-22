#include "main.h"

/**
 * print_alphabet - print alpahbets from a -z in lower case.
 *
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
