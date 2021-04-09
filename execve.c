#include "shell.h"

/**
 *
 *
 *
 */

int execute_command(void)
{
	pid_t pid;
	int status;
	int execreturn;
	char *args[] = {"/bin/ls", "-l", NULL};

	pid = fork; /* creating child process */

	if (pid == -1)
	{
		perror("Error in fork");
		return (-1);
	}

	else if (pid == 0) /* child */
	{
		printf("Hello parent I am child\n");

		execreturn = execve(args[0], args, NULL);

		if (execreturn = -1)
		{
			perror("Error in execve");
			return(-1);
		}
		printf("You won't see me\n");
		else
		{
			printf("Hello child I am parent\n"); /* parent */
			wait(&status);
		}
		return (0);
	}
}
