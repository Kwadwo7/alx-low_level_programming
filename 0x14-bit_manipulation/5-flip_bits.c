#include "main.h"

/**
 * flip_bits - it counts the number of bit to be changed
 * @n: first number to be changed
 * @m: second number to be changed
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k;
	int count_bit;
	unsigned long int present;
	unsigned long int exclude;

	count_bit = 0;
	exclude = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		present = exclude >> k;
		if (present & 1)
			count_bit++;
	}
	return (count_bit);
}
