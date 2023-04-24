#include "main.h"

/**
 * _putoctal - writes an octal number to stdout
 * @n: The octal number to write
 *
 * Return: The number of characters printed
 */
int _putoctal(unsigned int n)
{
char octal[32];
int i = 0, j, count = 0;

/* Convert the decimal number to octal */
while (n)
{
octal[i] = (n % 8) + '0';
n /= 8;
i++;
}
octal[i] = '\0';

/* Reverse the octal number */
for (j = i - 1; j >= 0; j--)
{
count += _putchar(octal[j]);
}

return (count);
}

