#include "main.h"
/**
 * print_rot13 - function that encodes a string using ROT13
 * @args: arguments
 * Return: 1
 */
int print_rot13(va_list args)
{
char *input = va_arg(args, char *);
int k, r;

if (input == NULL)
{
return (0);
}
for (k = 0; input[k] != '\0'; k++)
{
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (r = 0; r < 52; r++)
{
if (input[k] == data1[r])
{
_putchar(datarot[r]);
break;
}
}
}
return (1);
}
