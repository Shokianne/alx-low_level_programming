#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase letters
 * @str: the string to change
 * * Return: address of str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 'a' - 'A';
	       i++;
	}
	return (str);
}
