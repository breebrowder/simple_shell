#include "shell.h"

/**
 * _strlen- returning the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		++i;

	return (i);
}

/**
 * _strcmp - compare two strings and sets them equal
 * @str1: string one
 * @str2: string two
 *
 * Return: 1 if equal, 0 if it is not equal
 */
int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
			return (0);
	}

	return (1);
}

/**
 * _strncpy- function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
		dest[i] = '\0';

	return (dest);
}

/**
 * fork_fail - function that handles fork fail
 *
 * Return: void
 */
void fork_fail(void)
{
	perror("Error:");
	exit(EXIT_FAILURE);
}
