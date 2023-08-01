#include "main.h"
#include <stdio.h>
/**
 *rot13 - changes the "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
 * into "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm" respectively
 *
 *@c: the pointer containing the string
 *
 *Return: the string already converted
 */

char *rot13(char *c)
{
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int index, count;

	count = 0;
	while (c[count] != '\0')
	{
		index = 0;
		while (letter[index] != '\0')
		{
			if (c[count] == letter[index])
			{
				c[count] = rot[index];
				break;
			}
			index++;
		}
		count++;
	}
	return (c);
}
