#include "main.h"
/**
*_strlen - Returns the length of a string at a
*given memory address
*@s: Pointer to the string of interest
*
*Return: Length of the string
*/
int _strlen(char *s)
{
	int count, length;

	length = 0;
	for (count = 0; s[count] != '\0'; count++)
		length++;

	return (length);
}
