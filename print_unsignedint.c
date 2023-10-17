#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary
 * @args: these are the arguments
 * Return - returns the number of digits
 */

int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		putchar('0');
		return (1);
	}

	if (n / 2 != 0)
	{
		count += print_binary(args);
	}

	putchar('0' + n % 2);
	return (count + 1);
}
