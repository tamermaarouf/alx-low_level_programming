#include "main.h"

/**
<<<<<<< HEAD
 * print_rev - prints a string in reverse.
 * @s: param to reverse
 *
 * Return: void
 */
=======
 * print_rev - reverse string.
 * @s: param of string.
 *
 * Return: void
 */

>>>>>>> 22bacc504f46e0a32c727ad04a045a24d71b6ac3
void print_rev(char *s)
{
	int index;

	index = _strlen(s) - 1;
	while (index >= 0)
	{
		_putchar(*(s + index));
<<<<<<< HEAD
		index--;
=======
		--index;
>>>>>>> 22bacc504f46e0a32c727ad04a045a24d71b6ac3
	}
	_putchar('\n');
}

/**
<<<<<<< HEAD
 * _strlen - calculate length if string 
 * @s: param to calculate
=======
 * _strlen - calculate length of string
 * @s: param of string
>>>>>>> 22bacc504f46e0a32c727ad04a045a24d71b6ac3
 *
 * Return: length of string
 */

int _strlen(char *s)
{
<<<<<<< HEAD
	int length;

	length = 0;
	while (*s++)
		length++;
	return (length);
=======
	int counter;

	counter = 0;
	while (*s++)
		counter++;
	return (counter);
>>>>>>> 22bacc504f46e0a32c727ad04a045a24d71b6ac3
}
