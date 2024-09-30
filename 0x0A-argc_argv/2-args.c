#include <stdio.h>
/**
 * main - a program that prints all arguments it receives..
 * @argc: Number of command line arguments
 * @argv: punch of character
 * Return: Alawys Return 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
