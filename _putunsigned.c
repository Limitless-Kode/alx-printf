#include "main.h"

int _putunsigned(unsigned int n)
{
    if (n / 10)
        _putunsigned(n / 10);

    _putchar(n % 10 + '0');
    return (0);
}

