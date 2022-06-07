#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Display Single digit numbers of base 16
 * Return: 0 for Success
 */
int main(void)
{
	char c = '0';

	for (; c <= '9'; c++)
		putchar(c);
	c = 'a';
	for (; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
