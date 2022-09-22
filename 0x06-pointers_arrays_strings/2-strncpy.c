#include "main.h"

/**
 * _strncpy - copies src to the dest string
 * @dest: string to copy to
 * @src: string to copy
 * @n: largest number of bytes to copy
 * Return: address of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && *(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}
