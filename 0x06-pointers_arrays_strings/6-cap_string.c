#include "main.h"
#include <stdbool.h>
#include <stdio.h>

/**
 *cap_string - capitalizes all words in a string
 *
 *@s: the pointer containing the string
 *
 *Return: the string already converted
 */

char *cap_string(char *s)
{
	int i = 0;
	bool flag;

	while (*(s + i) != 0)
	{
		flag = separator_of_word(&s[i]);
		if (*(s + i) == s[0])
		{
			if (s[i] >= 97 && s[i] <= 122)
				*(s + i) -= 32;
		}
		if (flag)
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				*(s + i) -= 32;
			else
				i--;
		}
		i++;
	}
	return (s);
}

/**
 * separator_of_word - Separators of words: space, tabulation, new line
 * @c: param for check
 *
 * Return: 0 or 1
 */

char separator_of_word(char *c)
{
	int index = 0;
	bool flag;
	char tabulation[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (*(tabulation + index) != '\0')
	{
		if (*(tabulation + index) == *c)
		{
			flag = 1;
			break;
		}
		else
			flag = 0;
		++index;
	}
	return (flag);
}
