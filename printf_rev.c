#include "main.h"
/**
 * print_reverse_str - function that prints string in reverse
 * @args: arguments
 * Return: number of character printed
 */
int print_reverse_str(va_list args)
{
	const char *str = va_arg(args, const char *);
	int length, i, count;

	if (str == NULL)
	{
		return (0);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	count = 0;
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
