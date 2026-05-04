#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *prev;

	if (s == NULL || n == 0)
		return (NULL);

	prev = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (prev);
}
