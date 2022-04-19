#include "main.h"
/**
*_isdigit - Checks if a passed value is a digit
*@c: Value to be checked
*
* Return: returns 1 if c is a digit else 0
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
