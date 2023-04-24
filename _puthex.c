#include "main.h"

/**
 * _puthex - prints a number in hexadecimal format
 * @n: the number to be printed
 * @uppercase: a flag indicating whether to use uppercase letters
 *
 * Return: the number of characters printed
 */
int _puthex(unsigned int n, int uppercase)
{
char *hex_digits = uppercase > 0 ? "0123456789ABCDEF" : "0123456789abcdef";
char buffer[50];
int count = 0;
int i;

if (n == 0)
{
count += _putchar('0');
return (count);
}

while (n > 0)
{
buffer[count] = hex_digits[n % 16];
n /= 16;
count++;
}

for (i = count - 1; i >= 0; i--)
{
count += _putchar(buffer[i]);
}

return (count);
}

