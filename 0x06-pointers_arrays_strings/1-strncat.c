#include "main.h"

/**
 * _strncat - Concatenates two strings with n characters
 * @dest: main string
 * @src: completed string
 * @n: number of characters
 * Concatenates two strings with n characters
 * Return: the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i = 0;

	for (len = 0; dest[len]; len++)
	{}
	for (i = 0; i < n && src[i]; i++, len++)
		dest[len] = src[i];
	dest[len] = '\0';
	return (dest);
}
