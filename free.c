#include "shell.h"

/**
 * free_doubleptr - free memory assigned to double pointer
 * @ptr: double pointer to free
 *
 * Return: void
 */
void free_doubleptr(char **ptr)
{
	int ptr_tok;

	if (ptr == NULL)
		return; /* condition: if double pointer is empty */

	ptr_tok= 0;
	while (ptr[ptr_tok])
	{
		free(ptr[ptr_tok]);
		ptr_tok++;
	}
	if (ptr[ptr_tok] == NULL)
		free(ptr[ptr_tok]);

	free(ptr);
}
