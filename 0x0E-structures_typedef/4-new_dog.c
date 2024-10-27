#include <stdlib.h>
#include "dog.h"
#pragma pack(1)
/**
 * new_dog - a function that creates a new dog.
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: my_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		free(name);
		free(owner);
		return (NULL);
	}
	if (name == NULL)
	{
		free(my_dog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(my_dog);
		free(owner);
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
