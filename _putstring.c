#include "main.h"

/**
 * _putstring - prints a string
 * @str: the string to be printed
 *
 * Return: the number of characters printed
 */
int _putstring(char *str)
{
int i, count = 0;

if (str == NULL)
str = "(null)";

for (i = 0; str[i] != '\0'; i++)
count += _putchar(str[i]);

return (count);
}

