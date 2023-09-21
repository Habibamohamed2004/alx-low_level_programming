#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: Pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
		;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
