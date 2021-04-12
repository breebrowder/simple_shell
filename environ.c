#include "shell.h"

/**
 * printallenv - prints all of the environment variables to our standard output
 * @envar: double pointer to all env variables
 *
 * Return: void
 */
void printallenv(char **envar)
{
	unsigned int i = 0;
	unsigned int len;

	while (envar[i])
	{
		/* find the length of each environment variable */
		len = _strlen(envar[i]);

		/* write it to the stdout */
		write(STDOUT_FILENO, envar[i], len);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

/**
 * absolutepath- creates a double pointer array of all the directories contained
 * in the PATH, checks if first command is executable, then executes
 * @cmds: double pointer to all commands
 * @buffer: buffer created from getline
 * @envar: double pointer to env variables
 * @argv: argument vector
 * @number: number of times commands have been entered in prompt
 *
 * Return: void
 */

void absolutepath(char **cmds, char *buffer, char **envar, char **argv, int number)
{
	struct stat getfileStat_0;
	int i = 0;
	char **alldir;

	alldir = env_pathlist(cmds[0], envar);

	while (alldir[i]) /* looping through directories in PATH */
		if (alldir[i], &getfileStat_0) == 0) /* if this is true, then execute */
		{
			execve(alldir[i], cmds, NULL);
			i++;
		}

		hsh_errormsg(argv, cmds[0], number);
		free(buffer);
		free_doubleptr(cmds);
		free_doubleptr(alldir);
		exit(EXIT_SUCCESS);
