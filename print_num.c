#include "main.h"
/**
 * print_number - Prints the digits of a number
 * @n: The number to print
 * Return: The number of digits printed
 */
int print_number(int n)
{
int count = 0;

if (n / 10 != 0)
{
count += print_number(n / 10);
}
_putchar('0' + n % 10);
return (count + 1);
}
