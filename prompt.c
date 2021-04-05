#include "shell.h"

/**
 * print_prompt- write the prompt
 *
 * Return: void
 */

void print_prompt(void)
{
	write(STDOUT_FILENO, "$\n", 2);
}
