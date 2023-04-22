#include "main.h"

/**
 * _putunsigned - writes an unsigned integer to the standard output
 * @n: The unsigned integer to print
 *
 * Return: The number of characters written.
 */
int _putunsigned(unsigned int n)
{
int count = 0;

if (n / 10 != 0)
{
count += _putunsigned(n / 10);
}

_putchar((n % 10) + '0');
count++;

return (count);
}

