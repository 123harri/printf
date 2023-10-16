#include "main.h"
/**
 * print_unsigned - function that prints unsigned integer
 * @args: arguments
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
int n1, j = 1, num, d, temp = 1, p;
n1 = va_arg(args, int);

p = n1 % 10;
n1 = n1 / 10;
	num = n1;
	if (p < 0)
	{
		_putchar('-');
		num = -num;
		n1 = -n1;
		p = -p;
		j++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			temp = temp * 10;
			num = num / 10;
		}
		num = n1;
		while (temp > 0)
		{
			d = num / temp;
			_putchar(d + '0');
			num = num - (d * temp);
			temp = temp / 10;
			j++;
		}
	}
_putchar(p + '0');
return (j);
}
