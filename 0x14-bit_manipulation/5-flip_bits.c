#include "main.h"

/**
 * flip_bits - count the number of bit needed
 * Description: Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First digit
 * @m: Second digit tio flip n to
 * Return: The necessary number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_op = n ^ m;
	unsigned int counter = 0;

	/* Count number of set bits (bits with 1) in xor_op (xor operator) */
	while (xor_op)
	{
		/* Checks if the last bit is 1 */
		counter += (xor_op & 1);
		/* Right shifts the bits by 1 bit */
		xor_op >>= 1;
	}
	return (counter);
}