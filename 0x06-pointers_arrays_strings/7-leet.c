#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 * Return: address of str
 */

char *leet(char *str)
{
	int i, j;
	char k[] = "aAeEoOtTlL";
	char l[] = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (k[j] == *(str + i))
				*(str + i) = l[j];
		}
	}
	return (str);
}
