#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: holds age integer
 * @owner: holds dog's owner
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	int w, x, y, z;

	w = x = 0;
	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);
	if (name != NULL)
		while (name[w] != '\0')
			w += 1;
	if (owner != NULL)
		while (owner[x] != '\0')
			x += 1;
	_dog->name = malloc(w * sizeof(char) + 1);
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->owner = malloc(x * sizeof(char) + 1);
	if (_dog->owner == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	for (y = 0; y < w; y += 1)
		_dog->name[y] = name[y];
	for (z = 0; z < x; z += 1)
		_dog->owner[z] = owner[z];
	_dog->name[y] = '\0';
	_dog->owner[z] = '\0';
	_dog->age = age;
	return (_dog);
}
