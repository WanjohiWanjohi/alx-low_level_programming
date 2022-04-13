#include "main.h"
#include <stdio.h>
/**
*print_to_98 -  prints from a number upto 98
*@start: Number to start from
*
* Return: void
*/
void print_to_98(int start)
{
	if (start >= 98)
	{
		while (start > 98)
			printf("%d, ", start--);

		printf("%d\n", start);
	}
	else
	{
		while (start < 98)
			printf("%d, ", start++);

		printf("%d\n", start);
	}
}
