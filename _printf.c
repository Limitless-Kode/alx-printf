#include "main.h"


/**
 * _printf - writes formatted output to stdout
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0;
int count = 0;

va_start(args, format);

while (format && format[i])
{
if (format[i] == '%')
{
i++;

switch (format[i])
{
case 'c':
count += _putchar(va_arg(args, int));
break;
case 's':
count += _putstring(va_arg(args, char *));
break;
case '%':
count += _putchar('%');
break;
case 'd':
case 'i':
count += _putint(va_arg(args, int));
break;
case 'u':
count += _putunsigned(va_arg(args, unsigned int));
break;
case 'x':
count += _puthex(va_arg(args, unsigned int), 0);
break;
case 'X':
count += _puthex(va_arg(args, unsigned int), 1) - 32;
break;
case 'p':
count += _putpointer(va_arg(args, void *));
break;
case 'o':
count += _putoctal(va_arg(args, unsigned int));
break;
default:
count += _putchar('%');
if (format[i])
count += _putchar(format[i]);
break;
}
}
else
count += _putchar(format[i]);

i++;
}

va_end(args);
return (count);
}

