#include <stdio.h>

/**
 * main - prints name of file currently being run
 *
 * Return: zero on success, anything else failure
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
