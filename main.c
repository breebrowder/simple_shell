#include "header.h"

int main (void)
{
	char *buffer;
	size_t bufsize = 1024;
	size_t len = 1024;

	buffer = (char*)malloc(bufsize * sizeof(char));
	while (1)
	{
		_putchar('$');/*may use print_prompt*/
		getline(&buffer, &len, stdin);
			printf("%s", buffer);
	}
	return (0);
}
