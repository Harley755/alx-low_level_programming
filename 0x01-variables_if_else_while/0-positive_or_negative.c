#include <stdlib.h>
#include <stdlio.h>
#include <time.h>
/**
 * main - main function (entry point)
 * check if n is positive, negative or eagl to zero
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else {
		printf("%d is negative", n);
	}
	return (0);
}
