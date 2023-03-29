#include "main.h"
/**
 * puts_half- a function that prints half of a string, followed by a new line.
 * @str: the function parameter to be printed
 * Return:  void
 */

void puts_half(char *str)
{
	int x;
	int lenght = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
		lenght++;
	if (lenght % 2 == 0)
	{
	for (x = lenght / 2 ; str[x] != '\0' ; x++)
		_putchar(str[x]);
	_putchar('\n');
	}
	else if (lenght % 2 != 0)
	{
		for (x = (lenght - 1) / 2 ; str[x] != '\0' ; x++)
			_putchar(str[x]);
		_putchar('\n');
	}

}
