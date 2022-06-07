#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -main function (Entry point)
 * Display alphabet letters without q and e
 * Return: 0 for Success
 */
int main(void)
{
	char c = 'a';
	int count;

	do {
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		count++;
		c++;
	} while (count < 26);
	putchar('\n');
	return (0);
}
