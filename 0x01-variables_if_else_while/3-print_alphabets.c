#include <stdio.h>

/**
 * main- Enrty point of a code
 * description: print lower case then upper case with putchar
 *
 * Return: 0 if successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
