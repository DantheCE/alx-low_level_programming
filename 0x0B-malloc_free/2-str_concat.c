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
 * str_concat - concatenates two strings in an initialized memory location
 * @s1: first string for concatenation
 * @s2: first string for concatenation
 *
 * Return: NULL on failure or memory shortage, pointer to a concatenated
 * version of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrReturn, *temp;
	int s1Length = 0, s2Length = 0, total = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1Length = _strlen(s1);
	s2Length = _strlen(s2);
	total = s1Length + s2Length;

	ptrReturn = (char *)malloc(sizeof(char) * total + 1);
	if (ptrReturn == NULL)
		return (NULL);

	temp = ptrReturn;
	for (i = 0; i < s1Length; i++)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	for (i = 0; i < s2Length; i++)
	{
		*temp = *s2;
		temp++;
		s2++;
	}
	*temp = '\0';
	return (ptrReturn);
}
