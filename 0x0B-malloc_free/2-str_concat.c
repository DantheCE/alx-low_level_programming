#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	char *ptrReturn;
	char *temp;
	int s1Length = 0;
	int s2Length = 0;
	int total = 0;
	int i = 0;

	s1Length = _strlen(s1);
	s2Length = _strlen(s2);
	total = s1Length + s2Length;

	if (s1Length == 0 && s2Length == 0)
	{
		return (NULL);
	}

	ptrReturn = (char *)malloc(sizeof(char) * total);
	temp = ptrReturn;

	for (i = 0; i < s1Length; i++)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	i = 0;
	for (i = 0; i < s2Length; i++)
	{
		*temp = *s2;
		temp++;
		s2++;
	}
	return (ptrReturn);
}
