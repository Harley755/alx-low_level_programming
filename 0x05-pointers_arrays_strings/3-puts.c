#include "main.h"

/**
 * _puts - display a string
 * @str: a string
 * Get the length of a string
 * Return: length of the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		putchar(str[i]);
	putchar('\n');
}
