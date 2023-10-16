#include "main.h"
/**
 * print_octal - function that prints octal number
 * @args: arguments
 * Return: number of printed characters
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, i, index, octalDigits[100];

	if (num == 0)
	{
		_putchar('0');
		count++;
	}

	index = 0;

	while (num > 0)
	{
		octalDigits[index++] = num % 8;
		num /= 8;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(octalDigits[i] + '0');
		count++;
	}
	return (count);
}
