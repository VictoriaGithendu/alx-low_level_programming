#include<stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner to initialize
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}
