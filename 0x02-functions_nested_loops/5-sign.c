#include "main.h"
/**
 * print_sign - this function name prints sign
 *
 * @n: it is a parameter that is used to grade sign.
 * Return: if n > 0 = 1, n == 0 = 0, n = - ; -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
