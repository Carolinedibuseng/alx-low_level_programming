/**
 * get_bit - must return the value of a bit at an index in a decimal number
 * @n: this is the number to search
 * @index: index of a bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int c, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (c >> index) & 1;

	return (bit_val);
}
