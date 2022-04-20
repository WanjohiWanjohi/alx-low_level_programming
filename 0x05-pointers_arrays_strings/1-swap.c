#include "main.h"
/**
*swap_int - Swaps the value of two integers
*@a: pointer to the first integer
*@b: pointer to the second integer
*Return: returns void
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
