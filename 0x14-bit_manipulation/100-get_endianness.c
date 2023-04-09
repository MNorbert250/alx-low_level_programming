#include "main.h"

/**
 * get_endianness - checks if multibyte data is the endianness.
 * Description: Check the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);
	return (1);
}