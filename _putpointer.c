#include "main.h"

/**
 * _putpointer - prints the address of a pointer
 * @p: pointer to print
 *
 * Return: number of characters printed
 */
int _putpointer(void *p)
{
    unsigned long int ptr = (unsigned long int)p;
    char hex_digits[] = "0123456789abcdef";
    char buffer[20]; 
    int i, j;

    i = 0;
    do {
        buffer[i++] = hex_digits[ptr % 16];
        ptr /= 16;
    } while (ptr > 0);
    buffer[i] = '\0';

    // reverse the string
    for (j = 0; j < i / 2; j++) {
        char tmp = buffer[j];
        buffer[j] = buffer[i - j - 1];
        buffer[i - j - 1] = tmp;
    }

    // print the pointer address with the "0x" prefix
    return (_putstring("0x") + _putstring(buffer));
}

