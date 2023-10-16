#include "main.h"
/**
 * printf_str - function that print a string
 * @args: arguments
 * Return: length of the string
 */
int printf_str(va_list args)
{
	int len, j;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
{
	s = "(NULL)";
		len = _strlen(s);
	for (j = 0; j < len; j++)
		_putchar(s[j]);
	return (len);
}
else
{
	len = _strlen(s);
	for (j = 0; j < len; j++)
		_putchar(s[j]);
	return (len);
}
}
