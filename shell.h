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


int execute_command(void);
int _strlen(char *s);
int const_strlen(char *strconst);
char *_strncpy(char *dest, char *src, int n);
char *const_strncpy(char *dest, const char *src, int n);
int _strcmp(char *str1, char *str2);

#endif /* SHELL_H */
