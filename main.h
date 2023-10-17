#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_character(va_list args);
int printf_str(va_list args);
int _strlen(const char *s);
int _strlencon(const char *s);
int print_37(void);
int print_decimal(va_list args);
int printf_integer(va_list args);
int print_number(int n);

#endif
