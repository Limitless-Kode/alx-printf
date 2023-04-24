#include "main.h"

/**
 * _putint - prints an integer
 * @n: the integer to be printed
 *
 * Return: the number of digits printed
 */
int _putint(int n)
{
int count = 0;

if (n < 0)
{
count += _putchar('-');
n *= -1;
}

if (n / 10)
count += _putint(n / 10);

count += _putchar(n % 10 + '0');

return (count);
}

