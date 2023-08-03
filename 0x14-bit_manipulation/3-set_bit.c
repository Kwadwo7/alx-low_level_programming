#include "main.h"

/**
 * set_bit - at a given index, it sets a bit to 1
 * @n: it points to the number to change
 * @index: the index of the bit to set to 1
 * Return: 1 for success and -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
