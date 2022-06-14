#include "main.h"

/**
 * print_line - display underscore n times
 * @n: number of times to display _
 * Display underscore n times
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			putchar('_');
	}
	putchar('\n');
}
