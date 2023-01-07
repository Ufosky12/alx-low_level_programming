#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: input stringeturn
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
