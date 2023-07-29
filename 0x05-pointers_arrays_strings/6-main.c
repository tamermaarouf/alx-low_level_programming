#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str, *str_1;

    str = "0123456789";
    str_1 = "Holberton!\0Holberton";
    puts2(str);
    puts2(str_1);
    return (0);
}
