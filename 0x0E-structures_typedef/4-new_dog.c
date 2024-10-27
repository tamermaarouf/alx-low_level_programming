#include <stdlib.h>
#include <stdio.h>
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
	int name_size, owner_size;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	name_size = _strlen(name);
	owner_size = _strlen(owner);
	my_dog->name = malloc(sizeof(my_dog->name) * (name_size));
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(my_dog->owner) * (owner_size));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->name, name);
	my_dog->age = age;
	_strcpy(my_dog->owner, owner);
	return (my_dog);
}

/**
 * _strlen - calculates the length of a string point to by s.
 * @s: pointer to string for calculates
 *
 * Return: returns the number of bytes in the string pointed to by s.
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
		++length;
	return (length);
}

/**
 * _strcpy - copies the string pointes
 * @dest: copy the buffer pointed to by dest
 * @src: the source of string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index, counter;

	index = 0;
	counter = 0;
	while ((*(dest + counter) = *(src + index)) != '\0')
	{
		index++;
		counter++;
	}
	counter++;
	*(dest + counter) = '\0';
	return (dest);
}
