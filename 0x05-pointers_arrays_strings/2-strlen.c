#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	for (int counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
