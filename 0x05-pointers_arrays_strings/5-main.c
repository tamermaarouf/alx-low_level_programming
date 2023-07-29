#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[11] = "Holberton!";
    char c[10] = "My School";
    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    printf("%s\n", c);
    rev_string(c);
    printf("%s\n", c);
    return (0);
}
