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
    char si[446] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    printf("%s\n", c);
    rev_string(c);
    printf("%s\n", c);
    printf("%s\n", si);
    rev_string(si);
    printf("%s\n", si);
    return (0);
}
