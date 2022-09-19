#include "main.h"

/**
 * _strlen - retruns the length of a string
 * @s: the length of the string
 * Return: the lengthh
 *
 */

int _strlen(char *s)
{
	int length;

	while (*s++)
		length++;
	return (length);
}
