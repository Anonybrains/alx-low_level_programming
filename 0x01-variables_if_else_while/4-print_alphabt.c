#include <stdio.h>

/**
 * main- Entry point of a program
 * description: print lower case with exemption of e and q
 *
 * Return: 0 if successful
 */

int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
	putchar(i);
putchar('\n');
return (0);
}
