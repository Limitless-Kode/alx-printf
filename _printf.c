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
    int count = 0;

    va_start(args, format);

    while (format && *format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;
            switch (*format)
            {
                case 'c': count += _putchar(va_arg(args, int)); break;
                case 's': count += _putstring(va_arg(args, char *)); break;
                case 'd': case 'i': count += _putint(va_arg(args, int)); break;
                case 'u': count += _putunsigned(va_arg(args, unsigned int)); break;
                case 'x': case 'X': count += _puthex(va_arg(args, unsigned int), *format == 'X' ? 1 : 0) - (*format == 'X' ? 32 : 0); break;
                case 'o': count += _putoctal(va_arg(args, unsigned int)); break;
                case 'p': count += _putpointer(va_arg(args, void *)); break;
                default: count += _putchar('%'); if (*format) count += _putchar(*format); break;
            }
        }
        else
            count += _putchar(*format);
        format++;
    }

    va_end(args);
    return count;
}

