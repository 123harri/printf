#include "main.h"
/**
 * print_pointer - function that prints pointer address
 * @args: arguments
 * Return: number of character printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int address = (unsigned long int)ptr;
	char hexChar;
	int i, digit, count = 0;

	_putchar('0');
	_putchar('x');
	count += 2;

	for (i = sizeof(void *) * 2 - 1; i >= 0; i--)
	{
		digit = (address >> (i * 4)) & 0xF;
		hexChar = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
		_putchar(hexChar);
		count++;
	}
	return (count);
}
