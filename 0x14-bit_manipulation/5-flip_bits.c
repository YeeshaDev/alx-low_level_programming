#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int k)
{
	unsigned int nbits;

	for (nbits = 0; n || k; n >>= 1, k >>= 1)
	{
		if ((n & 1) != (k & 1))
			nbits++;
	}

	return (nbits);
}
