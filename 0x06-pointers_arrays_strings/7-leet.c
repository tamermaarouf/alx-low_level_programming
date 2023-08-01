#include "main.h"
#include <stdio.h>
/**
 *leet - changes the chars "aA" "eE" "oO" "tT" "lL" into 4 3 0 7 1 respectively
 *
 *@c: the pointer containing the string
 *
 *Return: the string already converted
 */

char *leet(char *c)
{
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int index, count;

	count = 0;
	while (c[count] != '\0')
	{
		index = 0;
		while (letter[index] != '\0')
		{
			if (c[count] == letter[index])
				c[count] = num[index];
			index++;
		}
		count++;
	}
	return (c);
}
