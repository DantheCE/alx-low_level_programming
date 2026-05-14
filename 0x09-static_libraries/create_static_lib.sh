#!/bin/bash
# Script to populate the 0x09-static_libraries with the requested functions, compile them to relocatable objects, and package them into libmy.a

echo "Creating source files..."

cat << 'EOF' > 0-isupper.c
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
EOF

cat << 'EOF' > 0-memset.c
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
EOF

cat << 'EOF' > 0-strcat.c
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
EOF

cat << 'EOF' > 1-isdigit.c
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
EOF

cat << 'EOF' > 1-memcpy.c
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
EOF

cat << 'EOF' > 1-strncat.c
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
EOF

cat << 'EOF' > 2-strchr.c
#include <stddef.h>

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
EOF

cat << 'EOF' > 2-strlen.c
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
EOF

cat << 'EOF' > 2-strncpy.c
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
EOF

cat << 'EOF' > 3-islower.c
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
EOF

cat << 'EOF' > 3-puts.c
#include <unistd.h>

void _puts(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}
EOF

cat << 'EOF' > 3-strcmp.c
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
EOF

cat << 'EOF' > 3-strspn.c
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				break;
		}
		if (!accept[i])
			break;
		s++;
		n++;
	}
	return (n);
}
EOF

cat << 'EOF' > 4-isalpha.c
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
EOF

cat << 'EOF' > 4-strpbrk.c
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
EOF

cat << 'EOF' > 5-strstr.c
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (NULL);
}
EOF

cat << 'EOF' > 6-abs.c
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
EOF

cat << 'EOF' > 9-strcpy.c
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
EOF

cat << 'EOF' > _putchar.c
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
EOF

cat << 'EOF' > main.h
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
EOF

echo "Compiling .c files to .o using gcc -c..."
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

echo "Creating the static library libmy.a..."
ar rcs liball.a *.o

echo "Done! The libmy.a has been generated with all required relocatable object files."
