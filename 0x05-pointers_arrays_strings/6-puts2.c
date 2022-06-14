#include "main.h"

/**
 * puts2 - Prints odd letter
 * @str: a string
 * Print odd letter
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (i % 2 == 0)
			putchar(str[i]);
	putchar('\n');
}
