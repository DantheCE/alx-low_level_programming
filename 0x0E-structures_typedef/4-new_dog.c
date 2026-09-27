#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to created instance, NULL if anything failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *created_dog = malloc(sizeof(dog_t));

	if (created_dog == NULL)
		return (NULL);
	created_dog->name = name;
	created_dog->age = age;
	created_dog->owner = owner;
	return (created_dog);
}
