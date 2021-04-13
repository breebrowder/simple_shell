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

/* FILE: _PUTCHAR.C */
int _putchar(char c);

/* FILE: STRING_HELPER1.C */
int _strlen(char *s);
int _strcmp(char *str1, char *str2);
char *_strncpy(char *dest, char *src, int n);

/* FILE: STRING_HELPER2.C */
unsigned int _conststrlen(const char *str);
char *_conststrncpy(char *dest, const char *src, int n);
char *_strncpyappend(char *dest, char *src, char *cmd, int d_len, int c_len);

/* FILE: MAIN.C */
void handler(int signum);
int main(int argc, char **argv, char **env);

/* FILE: STRINGTOK.C */
unsigned int cmd_length(char *str);
char **stringtokarray(char *str);

/* FILE: FREE.C */
void free_doubleptr(char **ptr);
void exitfree(char *buffer, char **cmds);
void envfree(char *buffer, char **cmds, char **environ);
void eof_constant(char *buffer);

/* FILE: ENVIRON.C */
void printallenv(char **envar);
void absPath(char **cmds, char *buffer, char **envar, char **argv, int number);



#endif /* SHELL_H */
