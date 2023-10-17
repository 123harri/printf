#include "main.h"
/**
 * _printf - custom printf function
 * @format: string format
 * Return: numbers of characters printed, excluding null bytes
 */
int _printf(const char *format, ...)
{

	match m[] = {
		{"%c", printf_character}, {"%s", printf_str}, {"%%", print_37},
		{"%d", print_decimal}, {"%i", print_int}, {"%b", print_binary},
		{"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hexadecimal}, {"%X", print_HEXAdecimal},
		{"%p", print_pointer}, {"%R", print_rot13}, {"%r", print_reverse_str},
		{"%S", print_custom_string},
	};

	va_list args;
	int count = 0, j, l = 0;

	va_start(args, format);
if (format == NULL || (format[0] == '%' && format[count] == '\0'))
	return (-1);
Here:

while (format[count] != '\0')
{
	j = 1;
	while (j >= 0)
	{
		if (m[j].id[0] == format[count] && m[j].id[1] == format[count + 1])
		{
			l = l + m[j].f(args);
			count = count + 2;
			goto Here;
		}
		j++;
	}
	_putchar(format[count]);
	count++;
	l++;
}
va_end(args);
return (l);
}
