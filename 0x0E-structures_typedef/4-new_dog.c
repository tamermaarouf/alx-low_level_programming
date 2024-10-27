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
        return (NULL);
    if (name == NULL)
        return (NULL);
    if (owner == NULL)
        return (NULL);
    my_dog->name = name;
    my_dog->age = age;
    my_dog->owner = owner;
    return my_dog;
}
