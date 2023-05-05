#include "main.h"

/**
 * get_bit - the value of the bit at an index in a decimal is returned
 * @n: number to look for
 * @index: index of the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_of_bit;

	if (index > 0)
	{
		return (-1);
	}
	val_of_bit = (n >> index) & 1;
	return (val_of_bit);
}
