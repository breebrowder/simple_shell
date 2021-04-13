#include "shell.h"

/**
 * env_pathlist- creates double ptr that stores each directory as a single ptr
 * @cmd1: first command the prompt takes
 * @envar: environment variables
 *
 * Return: memory address of double pointer
 */

char **env_pathlist(char *cmd1, char **envar)
{
	char **alldir;
	char *e_path, *directory;
	unsigned int len, i;
	int dir_len, cmd_len;

	e_path = _getenv("PATH", envar);
	len = total_dir(e_path);
	alldir = malloc(sizeof(char *) * (len + 1));
	if (alldir == NULL)
		return (NULL);

	i = 0;
	directory = strtok(e_path, ": ");
	while (directory != NULL)
	{
		dir_len = _strlen(directory);
		cmd_len = _strlen(cmd1);

		alldir[i] = malloc(sizeof(char) * (dir_len + cmd_len + 2));
		if (alldir[i] == NULL)
		{
			free_doubleptr(alldir);
			return (NULL);
		}
		_strncpyappend(alldir[i], directory, cmd1, dir_len, cmd_len);
		++i;
		directory = strtok(NULL, ": ");
	}
		alldir[i] = NULL;
		return (alldir);
}

/**
 * hsh_errormsg- writes hsh error msg
 * @argv: argument vector
 * @cmd1: first command prompt takes
 * @number: number of times prompt prints
 *
 * Return: void
 */

void hsh_errormsg(char **argv, char *cmd1, int number)
{
	int mul, num_len, cpy;

	write(STDERR_FILENO, argv[0], _strlen(argv[0]));
	write(STDERR_FILENO, ": ", 2);

	cpy = number;
	mul = 1;
	num_len = 1;

	while (cpy >= 10)
	{
		cpy /= 10;
		mul *= 10;
		++num_len;
	}
	while (num_len > 1)
	{
		if (number / mul < 10)
			_putchar((number / mul + '0'));
		else
			_putchar((number / mul) % 10 + '0');
		--num_len;
		mul /= 10;
	}
	_putchar(number % 10 + '0');
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd1, _strlen(cmd1));
	write(STDERR_FILENO, ": not found\n", 12);
}
