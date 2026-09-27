#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees initialized dog instance
 * @d: pointer to the created struct
 *
 * Return: Nothing
 */

void free_dog(struct dog *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
