#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog -  function that creates a new dog.
 * @name: dog name
 * @age: dogage
 * @owner: dog owner
 * Return: pointer to the new dog if no error otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	if (name != NULL && owner != NULL)
	{
		newDog = malloc(sizeof(dog_t));

		if (newDog == NULL)
			return (NULL);
		newDog->name = malloc((sizeof(char)) * (strlen(name) + 1));
		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}
		newDog->name = strcpy(newDog->name, name);
		newDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}
		newDog->owner = strcpy(newDog->owner, owner);
		newDog->age = age;
	}
	return (newDog);
}
