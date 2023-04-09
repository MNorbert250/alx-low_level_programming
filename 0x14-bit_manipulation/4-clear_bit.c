#include "main.h"

/**
 * clear_bit - clear bit 0 to a given index
 * @n: number
 * @index: The index, starting from 0 of the bit you want to set
 * Deacription: Sets the value of a bit to 0 at a given index.
 * Return: 1 if success, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int champion;

	/* Checks if index is within range - 8 (number of bits in the data type) */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	/* Creates a mask to clear the bit at the given index */
	champion  = ~(1 << index);
	/* Using bitwise AND (&) to clear the bit at that given index */
	*n &= champion;

	return (1);
}
