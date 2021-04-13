#include "shell.h"

/**
 * _conststrlen- finds the length of a constant string
 * @str: string to find length of
 *
 * Return: length of the constant string
 */

unsigned int _conststrlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])

		i++;

	return (i);
}

/**
 * _conststrncpy- copies one constant string to another string
 * @dest: destination string to copy from
 * @src: string to copy to
 * @n: length to copy
 *
 * Return: the destination memory address
 */
char *_conststrncpy(char *dest, const char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strncpyappend - copies paths, appends a "/" and command to each path
 * @dest: destination
 * @src: source
 * @cmd: command to append
 * @d_len: destination length
 * @c_len: command length
 *
 * Return: destination address
 */

char *_strncpyappend(char *dest, char *src, char *cmd, int d_len, int c_len)
{
	int i = 0;
	int k = 0;

	for (; i < d_len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		dest[i] = '/'; /* appends "/" & "command" to the src */
		i++;
	}

	for (; k < c_len && cmd[k] != '\0'; k++, i++)
	{
		dest[i] = cmd[k];
		dest[i] = '\0';
	}
	return (dest);
}
