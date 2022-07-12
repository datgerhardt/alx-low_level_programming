/**
 * _strlen - check the code
 * @s: input
 * Return: length of s
 */
#include <stdio.h>

int _strlen(char *s)
{
	int size = 0;
	char *p;
	for (p = s; *p; p++)
	{
		size++;
	}
	return size;
}
