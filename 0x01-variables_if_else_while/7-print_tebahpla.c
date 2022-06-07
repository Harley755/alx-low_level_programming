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
	char a = 'd';
	int count;

	do {
		putchar(a);
		count++;
		a--;
	} while (count < 26);
	putchar('\n');
	return (0);
}
