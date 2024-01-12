#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints a prompt, reads a line from user input, and prints it.
*
* Return: Always 0.
*/
int main(void)
{
	char *line = NULL;
	size_t len = 0;

	printf("$ ");
	getline(&line, &len, stdin);

	printf("%s", line);

	free(line);
	return (0);
}
