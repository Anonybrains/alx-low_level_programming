#include <stdio.h>

/**
 * main- The entry point of a program
 * description: prints the all combinations of single digit numbers
 *
 * Return: 0 is successful
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
{		putchar(x + '0');
	if (x != 9)
{
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}

