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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
