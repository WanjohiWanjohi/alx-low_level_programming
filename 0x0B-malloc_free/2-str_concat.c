#include "main.h"
/**
*str_concat - Concatenates two strings
*@s1: Pointer to the first string
*@s2: Pointer to the second string
*Return: Returns NULL if fails else
*return a pointer to the new string
*/
char *str_concat(char *s1, char *s2)
{
	char *joined_string;
	int index, join_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	joined_string = malloc(sizeof(char) * len);

	if (joined_string == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		joined_string[join_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		joined_string[join_index++] = s2[index];

	return (joined_string);
}
