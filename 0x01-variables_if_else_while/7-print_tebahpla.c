#include <stdio.h>

/**
 * main- Entry point of a program
 *description: prints lower case alphabet in revserse
 *
 * Return: 0 if successful
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
