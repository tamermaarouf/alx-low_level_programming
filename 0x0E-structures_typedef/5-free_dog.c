#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
	dog_t *free_dog;

	free_dog = d;
	if (free_dog == NULL)
		free(free_dog);
	free(free_dog->name);
	free(free_dog->owner);
	free(free_dog);
}
