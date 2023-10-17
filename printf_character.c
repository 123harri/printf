#include "main.h"
/**
 * printf_character - function that prints a character
 * @args: argument
 * Return: 1
 */
int printf_character(va_list args)
{
	char s;


	s = va_arg(args, int);
	_putchar(s);
	return (1);
}
