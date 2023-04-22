#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _strlen(char *str);
int _putstring(char *str);
int _puthex(unsigned int num, int uppercase);
int _putpointer(void *p);
int _putint(int n);
int _putunsigned(unsigned int n);
int _printf(const char *format, ...);
int _putoctal(unsigned int n);

#endif /* MAIN_H */

