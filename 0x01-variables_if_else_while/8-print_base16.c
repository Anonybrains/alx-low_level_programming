#include <stdio.h>

/**
 * main- Entry point if a program
 * description: print numbers if vase 16 in lower case
 *
 * Return: 0 if successful
 */

int main(void)
{
	int x;
	char p;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (p = 'a' ; p <= 'f' ; p++)
		putchar(p);
	putchar('\n');
	return (0);

}
