#include "main.h"
/**
 * print_binary - function that prints binary numbers
 * @args: arguments
 * Return: number of character printed
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, bit;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	while (num > 0)
	{
		bit = num & 1;
		_putchar(bit + '0');
		count++;
		num >>= 1;
	}
	return (count);
}
