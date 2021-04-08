#include "header.h"

/**
 * execute_command - execute the input from prompt
 * Return: Always 0.
 */
int execute_command(void)
{
	pid_t pid;
	int status;
	int execreturn;
	char *args[] = {
		"/bin/ls",
		"-l",
		NULL };
	pid = fork();
	if (pid == -1)
	{
		perror("Error in fork");
		return (-1);
	}
	else if (pid == 0)
	{
		printf("Hello parent I am child\n");
		execreturn = execve(args[0], args, NULL);
		if (execreturn == -1)
		{
			perror("Error in execve");
			return (-1);
		}
		printf("You wont see me\n");
	}
		else
		{
			printf("Hello child I am parent\n");
			wait(&status);
		}
		return (0);
}
