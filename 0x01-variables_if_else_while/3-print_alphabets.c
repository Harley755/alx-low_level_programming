#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Display all alphabet letters
 * Return: 0 for Success
 */
int main(void)
{
	char c = 'a';
	int count;
	do {
		putchar(c);
		if (c == 'z')
		{
			c = 'A';
			count = 0;
		}
		else
		{
			count++;
			c++;
		}
	} while (count < 26);
	putchar('\n');
	return (0);
}
