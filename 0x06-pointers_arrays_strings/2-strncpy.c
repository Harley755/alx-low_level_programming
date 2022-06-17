#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: main string
 * @src: completed string
 * @n: numbers of characters
 * Copies a string
 * Return: the final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
