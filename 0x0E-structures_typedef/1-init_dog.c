#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type
 * @d: struct dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Alawys Return 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
