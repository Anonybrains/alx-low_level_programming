#include <stdio.h>

/**
 * main- entry point of the program
 * description: print possible combination of three digits
 *
 * Return: 0 if successful
 */

	int main(void)
	{
	int i;
	int x;
	int y;

	for (i = 0 ; i < 10 ; i++)
	{
		for (x = 1 ; x < 10 ; x++)
		{
			for (y = 2 ; x < 10 ; y++)
			{
				if (i < x && x < y)
				{
				putchar(i + '0');
				putchar(x + '0');
				putchar(y + '0');
					if (i + x + y != 24)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
	}

