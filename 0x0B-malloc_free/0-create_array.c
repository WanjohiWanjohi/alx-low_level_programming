#include "main.h"
/**
*create_array - creates an array frm char
*@size: size of array
*@c: initializing character
*Return: pointer to array or null if fail
*/
char *create_array(unsigned int size, char c)
{
	char *chararr;
	unsigned int index;

	if (size == 0)
		return (NULL);
	chararr = malloc(sizeof(char) * size);
	if (chararr == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		chararr[index] = c;
	return (chararr);
}
