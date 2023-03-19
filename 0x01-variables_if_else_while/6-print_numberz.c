#include <stdio.h>

/**
 * main- Entry point of a program
 * description: prints single digit of base 10
 *
 * Return: 0 if successful
 */

int main(void)
{
	char x;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
