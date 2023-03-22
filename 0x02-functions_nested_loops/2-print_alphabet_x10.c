#include "main.h"
/**
 * print_alphabet_x10 - this program print alphabet a to z x10
 *
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
int t;
char x;

for (t = 1 ; t <= 10 ; t++)
{
	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}

}
