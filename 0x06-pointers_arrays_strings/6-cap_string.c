#include "main.h"

/**
 * cap_string - Capitalizez all words of a string
 * @str: the string
 * Return: char*
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{	
		if ((str[i] >= 'a' && str[i] <= 'z') &&
				(str[i - 1] == '!' || str[i - 1] == ' ' ||
				str[i - 1] == '\t' || str[i - 1] == '\n' ||
				str[i - 1] == '(' || str[i - 1] == ')' ||
				str[i - 1] == '?' || str[i - 1] == '"' ||
				str[i - 1] == '{' || str[i - 1] == '}' ||
				str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'))
			str[i] -= 32;
		else if (str[0] >= 'a' && str[0] <= 122)
			str[i] -= 32;
		else
			continue;
	}
	return (str);
}
