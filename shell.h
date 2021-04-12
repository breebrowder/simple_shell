#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

/* Printing Helper Functions */
int _putchar(char c);
void _puts(char *str);


/* String Helper Functions */
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *str1, char *str2);

/* Actual Shell Emulation Functions */
int main(int argc, char **argv, char **env);
unsigned int cmd_length(char *str);
char **stringtokarray(char *str);

/* Freeing Memory Functions */
void free_doubleptr(char **ptr);
void eof_constant(char *buffer);


#endif /* SHELL_H */
