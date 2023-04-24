#include "main.h"

/**
 * _putpointer - prints a pointer address
 * @ptr: pointer to be printed
 *
 * Return: number of digits printed
 */
int _putpointer(void *ptr)
{
char *hex = "0123456789abcdef";
unsigned long int num = (unsigned long int) ptr;
unsigned long int temp = num;
int len = 0;
/* Find length of hex string */
do {
len++;
temp /= 16;
} while (temp != 0);
/* Print "0x" */
_putchar('0');
_putchar('x');
/* Print hex string */
if (num == 0)
len += _putchar('0');
else
{
char buffer[len + 1];
buffer[len] = '\0';
for (int i = len - 1; i >= 0; i--)
{
buffer[i] = hex[num % 16];
num /= 16;
}
len += _putstring(buffer);
}
return (len);
}

