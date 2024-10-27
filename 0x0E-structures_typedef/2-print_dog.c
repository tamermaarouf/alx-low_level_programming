#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: pointer to struct
 * Return: Alawys Return 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	printf("Name: %s\n", d->name);
	printf("Name: %.1f\n", d->age);
	printf("Name: %s\n", d->name);
}
