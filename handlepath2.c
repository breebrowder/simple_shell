#include "shell.h"

/**
 * total_dir - finds total number of directories in the path
 * @path: the path string
 *
 * Return: number of directories in the path
 */
unsigned int total_dir(char *path)
{
        unsigned int dir, i, flag;

        i = 0, dir = 0, flag = 0;
        while (path[i])
        {
                if (path[i] != ':')
                        flag = 1;

                if ((flag && path[i + 1] == ':') || (flag && path[i + 1] == '\0'))
                {
                        dir++;
                        flag = 0;
                }
                ++i;
        }
        return (dir);
}
/**
 * _getenv - gets the environment variable value
 * @name: name of the environment vaariable you are looking for
 * @environ: the enviroment variables
 *
 * Return: the value associated with the variable
 */
char *_getenv(const char *name, char **environ)
{
        char *env_value;
        char *name_copy;
        unsigned int i, length;

        /* find the length of the argument, then malloc space for it */
        length = _conststrlen(name);
        name_copy = malloc((sizeof(char) * length) + 1);
        if (name_copy == NULL)
                return (NULL);
        /* copy the contents of the name argument to the new variable, name_copy */
        _conststrncpy(name_copy, name, length);
        /*
         * find the enviroment variable that matches the name_copy variable
         * assign the value to the value variable and return the address
	 */
        i = 0;
        env_value = strtok(environ[i], "=");
        while (environ[i])
        {
                if (_strcmp(env_value, name_copy))
                {
                        env_value = strtok(NULL, "\n");
                        free(name_copy);
                        return (env_value);
                }
                ++i;
                env_value = strtok(environ[i], "=");
        }

        free(name_copy);
        return (NULL);
}
