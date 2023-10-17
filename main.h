#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_character(va_list args);
int printf_str(va_list args);
int _strlen(char *s);
int _strlencon(const char *s);
int print_37(void);
int print_decimal(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexadecimal(va_list args);
int print_HEXAdecimal(va_list args);
int print_custom_string(va_list args);
int print_pointer(va_list args);
int print_reverse_str(va_list args);
int print_rot13(va_list args);

#endif
