#include "shell.h"

/**
 * handler- handles signals and print the prompt
 * @signum: signal to handle
 *
 * Return: void
 */

void handler(int signum)
{
	(void) signum;

	write(STDOUT_FILENO, "\n$ ", 3);
}

/**
 * main- emulation of Shell with limited functionality
 * @argc: argument count
 * @argv: argument vector
 * @env: environment variables
 *
 * Return: 0 on success, 1 if failure
 */

int main(int argc, char **argv, char **env) /* checkout execve man page for prototype */
{
	char *buffer, **cmds;
	size_t len; ssize_t stringoftext;
	char *prompt = "$ ", *exitcmd = "exit", *envcmd = "env";
	pid_t pid; /* struct stat fileStat; */
	int status, error;
	(void)argc;
/*  int execreturn;
        char *args[] = {
                "/bin/ls",
                "-l",
                NULL }; */

	buffer = NULL, len = 0, error = 0;

	if (isatty(STDIN_FILENO)) /* testing if fd is associated with hsh */
		write(STDOUT_FILENO, prompt, 2); /* write takes 3 args: fd, pointer to buffer where data is stored, # of bytes to write from buffer */

	signal(SIGINT, handler); /* signal kill: ctrl + c sends SIGINT signal that interrupts process and ends never ending while loop */

	while (1) /* loop forever */
	{
		stringoftext = getline(&buffer, &len, stdin)
			if (stringoftext == EOF)
				_fileend(buffer);
		error++;

		cmds = stringtokarray(buffer);
		pid = fork(); /* create a new process */

		if (pid == -1)
		{
			perror("Error in fork");
			return (-1);
		}
		else if (pid == 0) /* child */
			execreturn = execve(args[0], args, NULL);

		if (execreturn = -1)
			{
				perror("Error in execve");
				return (-1);
			}
	}
	else
	{
		wait(&status); /* waits for child to finish + stores address of status: kill unneccessary bc child wont make zombies */
		if (cmds == NULL)
			free(buffer);
		free_doubleptr(cmds);

		else if (_strcmp(exitcmd, cmds[0])
			 exitall(buffer, cmds);

			 else
				 free(buffer);
			 free_doubleptr(cmds);
			 }
		len = 0; buffer = NULL;

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, 2);
	}
	if (stringoftext = -1)
		return (EXIT_FAILURE); /* macro: this is 1 */
	else
		return (EXIT_SUCCESS); /* macro: this is 0 */
}
