#include "main.h"

int _putstring(char *s)
{
    int len = _strlen(s);
    return (write(1, s, len));
}

