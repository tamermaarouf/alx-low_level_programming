#include "main.h"
/**
 **reverse_array - reverses the content of an array of integers
 *
 *@a: the array to be evaluated
 *@n: size of the array
 *
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int begin, end, temp;

	begin = 0;
	end =  0;
	while (end < (n - 1))
		end++;

	while (begin <= end)
	{
		temp = *(a + end);
		*(a + end) = *(a + begin);
		*(a + begin) = temp;
		begin++;
		end--;
	}
}
