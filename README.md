# Simple Shell Group Project- Cohort 14

## Description

This is a recreation of Bash (Bourne Again Shell) that contains limited functionality. Tasked to us by Holberton School, this emulation of the shell will provide us with a better understanding of the inner workings of how a functional shell program operates.

![image joke printf](https://user-images.githubusercontent.com/58611397/111072067-fc769700-84a6-11eb-93a2-42cb55eb731d.jpg)

### List of allowed functions and system calls

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

### Compilation

* Our code will be compiled this way:
~~~~~~~~~~~~
$  gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
~~~~~~~~~~~~

### Testing

Your shell should work like this in interactive mode:

````
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
````
But also in non-interactive mode:

````
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
````
### Resources

* [Everything you need to know to start coding your own shell](https://intranet.hbtn.io/concepts/64)
* [Writing Your Own Shell](https://www.cs.cornell.edu/courses/cs414/2004su/homework/shell/shell.html)
* [Let's Build a Linux Shell Part I](https://hackernoon.com/lets-build-a-linux-shell-part-i-bz3n3vg1)
* [How do I use execve in C](https://jameshfisher.com/2017/02/05/how-do-i-use-execve-in-c/)

### Link to Blog Post

[Under the Hood: Unix Remix]
* insert here

### Contributors

1. Bree Browder - 2372@holbertonschool.com
3. Nikki Edmonds - 2495@holbertonschool.com

```
Project Due Date: April 15, 2021
```