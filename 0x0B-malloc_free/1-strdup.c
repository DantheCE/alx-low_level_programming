#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	length = _strlen(str);

	if (length == 0)
		return (NULL);

	ptrReturn = (char *)malloc(sizeof(char) * length);
	temp = ptrReturn;

	while (length > 0)
	{
		*temp = *str;
		temp++;
		str++;
		length--;
	}
	return (ptrReturn);
}
