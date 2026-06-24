#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string received from user
 *
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
 * _strdup - initializes memory and creates a copy of the given string
 * in that memory location
 * @str: string to copy into new memory space
 *
 * Return: NULL on failure or memory shortage, pointer to a copy of
 * the string on success
 */
char *_strdup(char *str)
{
	char *temp;
	char *ptrReturn;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str);

	ptrReturn = (char *)malloc(sizeof(char) * length + 1);
	if (ptrReturn == NULL)
	{
		return (NULL);
	}
	temp = ptrReturn;

	while (length > 0)
	{
		*temp = *str;
		temp++;
		str++;
		length--;
	}
	*temp = '\0';
	return (ptrReturn);
}
