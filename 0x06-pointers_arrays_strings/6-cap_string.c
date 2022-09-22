#include "main.h"

/**
 * cap_string - capitalizes all the words in the string
 * @str: string to be capitalized
 * Return: the str address
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char s[] = " \t\n,;.!?\"(){}";

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (s[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}

