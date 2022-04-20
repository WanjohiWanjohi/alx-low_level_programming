#include "main.h"
/**
*print_rev - Prints the characters in reverse
*@s: string to print in reverse
*Return: void
*/
void print_rev(char *s)
{
	int length = 0, index = 0;

	length = _strlen(s);
	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

/**
*_strlen - returns the length of a string
*@s: string
*Return: returns lenght;
*/
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
