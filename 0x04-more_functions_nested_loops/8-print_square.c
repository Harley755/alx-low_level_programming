#include "main.h"

/**
 * print_square - display a square of #
 * @n: number of times to display #
 * Display a square of #
 * Return: void
 */
void print_square(int n)
{
	int i;
	int j;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= n; j++)
				putchar('#');
			putchar('\n');
		}
											}
}
