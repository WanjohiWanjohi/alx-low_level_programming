#include <stdio.h>
/**
 * main - Returns the alphabet
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
