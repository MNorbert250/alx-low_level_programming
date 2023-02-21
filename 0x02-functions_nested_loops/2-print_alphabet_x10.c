#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * Return: void
 */

void print_alphabet_x10(void)

{
char k;
int n = 0;

while (n <= 9)
{
for (k = 'a'; k <= 'z'; k++)		
{
_putchar(k);

_putchar('\n');
k++;
}
}
