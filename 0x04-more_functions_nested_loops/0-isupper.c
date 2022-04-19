#include "main.h"
/**
*_isupper - Checks if letter is uppercase
*@c: Value to check if uppercase
*
*Return: int
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
