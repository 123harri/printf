#include "main.h"
/**
 * print_hexadecimal - function that convert unsigned int to it hexadecimal
 * @args: arguments
 * Return: number of character printed
 */
int print_hexadecimal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, i, index, remainder;
	char hexDigits[100];

		if (num == 0)
		{
			_putchar('0');
			count++;
		}

	index = 0;

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hexDigits[index++] = remainder + '0';
		}
		else
		{
			hexDigits[index++] = remainder - 10 + 'a';
		}
		num /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(hexDigits[i]);
		count++;
	}
	return (count);
}
