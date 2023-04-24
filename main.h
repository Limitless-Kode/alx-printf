#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int _putstring(char *s);
int _putint(int n);
int _putunsigned_int(unsigned int n);
int _puthex(unsigned int n, int uppercase);
int _putpointer(void *p);
int _putoctal(unsigned int n);

#endif /* MAIN_H */

