#include "main.h"
/**
 * print_last_digit - This function name prints the last digit of a number
 * @i: The parameter checks for last digit of a number
 *
 * Return: always k
 */

int print_last_digit(int i)
{
	int d;

	d = i % 10;
	if (i < 0)
		d = -(d);
	return (d);
}
