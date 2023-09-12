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

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
