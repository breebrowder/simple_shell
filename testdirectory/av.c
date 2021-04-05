#include <stdio.h>
#include <stdlib.h>

/**
 * main- function containing arguments
 * @ac: the number of items in av
 * @av: NULL terminated array of strings
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	(void) ac;
	int i;

	for (i = 0; av[i] != '\0'; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
