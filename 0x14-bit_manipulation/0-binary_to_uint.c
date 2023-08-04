#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int.
 * @b: pointer to a string with binary number..
 * Return: unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, bin = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			bin += base;
		base *= 2;
		len--;
	}
	return (bin);
}