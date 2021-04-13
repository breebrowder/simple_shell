# Simple Shell Group Project- Cohort 14

## Description

This is a recreation of Bash (Bourne Again Shell) that contains limited functionality. Tasked to us by Holberton School, this emulation of the shell will provide us with a better understanding of the inner workings of how a functional shell program operates. We will be using what we have previously learned in the trimester as well as learning a few new concepts as we work on this project.

![](http://clipartmag.com/image/seashell-drawing-38.jpg)

### Requirements

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 14.04 LTS
3. Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
4. All your files should end with a new line
5. A README.md file, at the root of the folder of the project is mandatory
6. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
7. Your shell should not have any memory leaks
8. No more than 5 functions per file
9. All your header files should be include guarded
10. Use system calls only when you need to

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

### Mandatory Tasks
#### 0. README, man, AUTHORS
* Write a README.
* Write a man for your shell.
* You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository.

#### 1. Betty would be proud
* Write a beautiful code that passes the Betty checks.

#### 2. Simple Shell 0.1
Write a UNIX command line interpreter.

Usage: simple_shell

Your Shell should:

* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
* The command lines are made only of one word. No arguments will be passed to programs.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* You have to handle the end of file condition (Ctrl+D).

You dont have to:

* use the PATH.
* implement built-ins.
* handle special characters.
* be able to move the cursor.
* handle commands with arguments.

#### 3. Simple Shell 0.2
* Handle command lines with arguments.

#### 4. Simple Shell 0.3
* Handle the PATH.

#### 5. Simple Shell 0.4
* Implement the exit built-in, that exits the shell.
* Usage: exit.
* You dont have to handle any argument to the built-in exit.

#### 6. Simple Shell 1.0
* Implement the env built-in, that prints the current environment.

#### 7. What happens when you type `ls -l *.c` in the shell
* Write a blog post describing step by step what happens when you type ls -l *.c and hit Enter in a shell. Try to explain every step you know of, goin  g in as much details as you can, give examples and draw diagrams when needed. You should merge your previous knowledge of the shell with the specifi  cs of how it works under the hoods (including syscalls).

### Resources

* [Everything you need to know to start coding your own shell](https://intranet.hbtn.io/concepts/64)
* [Writing Your Own Shell](https://www.cs.cornell.edu/courses/cs414/2004su/homework/shell/shell.html)
* [Let's Build a Linux Shell Part I](https://hackernoon.com/lets-build-a-linux-shell-part-i-bz3n3vg1)
* [How do I use execve in C](https://jameshfisher.com/2017/02/05/how-do-i-use-execve-in-c/)

### Link to Blog Post

[Under the Hood: Unix Remix](https://2372.medium.com/under-the-hood-unix-remix-2f507ebb2f6)

### Contributors

1. Bree Browder - 2372@holbertonschool.com
3. Nikki Edmonds - 2495@holbertonschool.com

```
Project Due Date: April 15, 2021
```
