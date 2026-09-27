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

	created_dog->name = malloc(sizeof(_strlen(name) + 1));
	if (created_dog->name == NULL)
		free(created_dog);
		return (NULL);
	created_dog->name = _strcpy(created_dog->name, name);

	created_dog->owner = malloc(_strlen(owner) + 1);
	if (created_dog->owner == NULL)
		free(created_dog->name);
		free(created_dog);
		return (NULL);
	created_dog->owner = _strcpy(created_dog->owner, owner);

	created_dog->age = age;
	return (created_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: string received from user
 * Return: the length of the string in numbers
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _strcpy - copies a string into another
 * @dest: string to be copied into
 * @source: string to be copied
 * Return: returns the new string
 */

char *_strcpy(char *dest, char *source)
{
	int i = 0;

	while (source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
