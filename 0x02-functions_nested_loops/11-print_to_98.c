#include "main.h"
#include <stdio.h>
/**
 * print_to_98- This the function name for printing natural no.
 * @n: parameter for check
 */

void print_to_98(int n)
	{
	int x;

	if (n >= 0 && n <= 98)
	{
		for (x = n ; x <= 98 ; x++)
		{
			printf("%d", x);
			if (x != 98)
			printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (x = n ; x >= 98 ; x--)
		{
			printf("%d", x);
			if (x != 98)
			printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (x = n ; x <= 98; x++)
		{
		printf("%d", x);
			if (x != 98)
			printf(", ");
		}
		printf("\n");
	}

	else if (n == 98)
	{
		printf("%d, ", n);
	}
}
