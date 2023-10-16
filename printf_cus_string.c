#include "main.h"
/**
 * print_custom_string - function that prints custom string
 * @args: value
 * Return: the number of characters printed
 */
int print_custom_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, i;

	if (str == NULL)
	{
		for (i = 0; "(null)"[i] != '\0'; i++)
		{
			_putchar("(null)"[i]);
			count++;
		}
	}
	else
	{
		while (*str != '\0')
		{
			if (*str >= 32 && *str < 127)
			{
				_putchar(*str);
				count++;
			}
			else
			{
				count += _putchar('\\');
				count += _putchar('x');
				count += _putchar((*str >> 4) < 10 ? (*str >> 4) + '0' :
						(*str >> 4) - 10 + 'A');
				count += _putchar((*str & 0xF) < 10 ? (*str & 0xF) + '0' :
						(*str & 0xF) - 10 + 'A');
			}
			str++;
		}
	}
	return (count);
}
