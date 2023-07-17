#include "dog.h"
#include<stdlib.h>
/**
 * _strlen - finds string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s++)
		x++;
	return (x);
}
/**
 * _strcopy - copies pointed string
 * @dest: buffer
 * @src: source
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int x = 0;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];

	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
