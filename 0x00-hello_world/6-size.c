#include <stdio.h>
/**
 * main - main function (entry point)
 * used sizeof function to prints the size of various types
 * Return: 0 for success
 */
int main(void)
{
		long long int c;
		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
		return (0);
}
