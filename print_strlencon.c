#include "main.h"
/**
 * _strlencon - function that is applied for constant char pointer s
 * @s: character pointer
 * Return: length
 */
int _strlencon(const char *s)
{
int length;

for (length = 0; s[length] != 0; length++)
	;
return (length);
}

/**
 * _strlen - a function that returns the length of a string
 * @s: Pointer to the input string
 * Return: The length of the string (number of characters)
 */
int _strlen(const char *s)
{
int length;
for (length = 0; s[length] != 0; length++)
	;
return (length);
}
