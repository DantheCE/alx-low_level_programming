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
 * string_nconcat - concatenates s1 and s2 using n number of elements from s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to allocated memory with concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int totalLen = 0, i = 0, s1Len = 0, s2Len = 0;
	char *concatPtr, *tempPtr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1Len = _strlen(s1);
	s2Len = _strlen(s2);
	if (n > s2Len)
	{
		n = s2Len;
	}
	totalLen = s1Len + n + 1;
	concatPtr = malloc(sizeof(char) * totalLen);
	if (concatPtr == NULL)
	{
		return (NULL);
	}
	tempPtr = concatPtr;

	for (i = 0; i < s1Len; i++)
	{
		*tempPtr = *s1;
		s1++;
		tempPtr++;
	}
	for (i = 0; i < n; i++)
	{
		*tempPtr = *s2;
		s2++;
		tempPtr++;
	}
	*tempPtr = '\0';
	return (concatPtr);
}
