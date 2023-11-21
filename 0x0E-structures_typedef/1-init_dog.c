#include "dog.h"

/**
 * init_dog - initializes a variable of struct dog
 * @d: pointer to be initialized
 * @name: variable to be initialized to
 * @age: variable to be initialized to
 * @owner: variable to be initialized to
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

