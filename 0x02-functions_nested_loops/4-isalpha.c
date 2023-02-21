#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * Return: int.
 */

int _isalpha(int k)
{
	if ((k >= 65 && k <= 90) || (k >= 97 && k <= 122))
		return (1);
	else
		return (0);
}
