#include "main.h"

/**
 * print_binary - this must print the binary equivalent of a decimal number
 * @n: is the numb to print in binary
 */
void print_binary(unsigned long int c)
{
	int d, count = 0;
	unsigned long int current;

	for (d = 63; d >= 0; d--)
	{
		current = c >> d;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
