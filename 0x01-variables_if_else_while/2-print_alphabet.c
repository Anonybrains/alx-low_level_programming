#include <stdio.h>

/**
 * main- Entry point of the program
 * description: print lowercase alphabets with putchar
 *
 * Return: 0 if successful
 */

int main(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
putchar(i);
putchar('\n');
return (0);
}
