#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the number to be flipped
 * @m: the nber to flip n to
 *
 * Return: number of bits needed to be flipped to get from one number
 * to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bits = 0;

	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}

	return (bits);
}
