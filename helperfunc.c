#include "shell.h"

/**
 * _strlen- returning the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */

unsigned int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	return (i);
}

/**
 * const_strlen- returning the length of a constant string
 * @strconst: pointer to constant string
 *
 * Return: length of constant string
 */

unsigned int const_strlen(const char *strconst)
{
	int i = 0;

	for (; strconst[i] != '\0'; i++)

	return (i);
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

	for (i = 0; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * const_strncpy- function that copies a constant string to another string
 * @dest: destination string to copy from
 * @src: source string to copy to
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *const_strncpy(char *dest, const char *src, int n)
{
        int i = 0;

        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[i] = src[i];

        for (i = 0; i < n; i++)
                dest[i] = '\0';

        return (dest);
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
