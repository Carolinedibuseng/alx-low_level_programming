#include "main.h"

/**
 * binary_to_uint - it must convert a binary number to an unsigned int
 * @b:this is the string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *d)
{
	int a;
	unsigned int dec_val = 0;

	if (!d)
		return (0);

	for (a = 0; d[a]; a++)
	{
		if (d[a] < '0' || d[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (d[a] - '0');
	}

	return (dec_val);
}
