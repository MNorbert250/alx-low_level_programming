#include "main.h"

/**
 * binary_to_uint - entry point
 * Description: Convert a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: 0 if b is NULL or there's a non 0 or 1 char
 */
unsigned int binary_to_uint(const char *b)
{

	int champion = 0, l;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[champion] != '\0')
		champion++;
	champion -= 1;
	l = 0;
	while (b[l])
	{
		if ((b[l] != '0') && (b[l] != '1'))/*&& logical AND operator*/
			return (non_binary);

		if (b[l] == '1')
			number += (1 * (1 << champion));/*<< bitwise left shift operator*/
		l++;

		champion--;
	}
	return (number);
}
