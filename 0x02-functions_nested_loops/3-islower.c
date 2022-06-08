#include <ctype.h>
#include "main.h"
/**
 * _islower - Checks if c is lowercase
 * c: the character to be checked with islower function,
 * _islower check if @c is lowercase
 * Return: 1 if c is lowercase and 0 if not
 */
int _islower(int c)
{
	int isLower;

	isLower = islower(c);
	if (isLower == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
