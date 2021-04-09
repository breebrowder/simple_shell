#include "shell.h"

/**
 * cmd_length- function that finds the number of commands in the string
 * @str: the string containing commands
 *
 * Return: number of commands
 */
unsigned int cmd_length(char *str)
{
	unsigned int cmd_number;
	unsigned int i;
	unsigned int flag; /* this is a signal for a process */

	flag = 0;
	cmd_number = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			flag = 1;

		if ((flag && str[i + 1] == ' ') || (flag && str[i + 1] == '\0'))
		{
			cmd_number++;
			flag = 0;
		}
	}
	return (cmd_number);
}

/**
 * stringtokarray- function creates a double pointer array that holds pointers
 * to each tokenized string
 * @str: the commands being typed in standard input
 *
 * Return: double pointer array of pointers which are commands the shell will
 * interpret and execute
 */
char **stringtokarray(char *str)
{
	char **separatedtokencmds;
	char *piece;
	unsigned int length;
	int i = 0;

	/* replace '\n' added by getline with '\0'*/
	str[_strlen(str) - 1] = '\0';
	length = cmd_length(str);
	if (length == 0)
		return (NULL);

	/* +1 accounts for NULL token that will be added */
	separatedtokencmds = malloc((sizeof(char *)) * (length + 1));
	if (separatedtokencmds == NULL)
		return (NULL);

	piece = strtok(str, " ");
	while (piece != NULL)
	{
		separatedtokencmds[i] = malloc(_strlen(piece) + 1);
		if (separatedtokencmds[i] == NULL)
		{
/*			free_all_double_ptr(separatedtokencmds); */
			return (NULL);
		}
		_strncpy(separatedtokencmds[i], piece, _strlen(piece) + 1);
		piece = strtok(NULL, " ");
		++i;
	}
	separatedtokencmds[i] = NULL;
	return (separatedtokencmds);
}
