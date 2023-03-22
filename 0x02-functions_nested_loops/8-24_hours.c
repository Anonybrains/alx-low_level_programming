#include "main.h"
/**
 * jack_bauer- The function name for printing 24 hrs of a day
 *
 * Return: 0 if successful
 */

void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0 ; x < 24 ; x++)
	{
		for (y = 0 ; y < 60 ; y++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar('\n');
		}
	}
}
