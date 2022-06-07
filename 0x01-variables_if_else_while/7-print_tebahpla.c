#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Display alphabet letters in reverse
 * Return: 0 for Success
 */
int main(void)
{
	char c = 'z';
	int count;

	do {
		putchar(c);
		count++;
		c--;
	} while (count < 26);
	putchar('\n');
	return (0);
}
