#ifndef dog_H
#define dog_H

/**
 * struct dog - Define a new type struct dog
 * @name: name dog
 * @age: age
 * @owner: owner
 * description: Define a new type struct dog with the following elements
 */

typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
