#include "header.h"
/**
* main - Intialize the simple shell proram.
*
* Return: Always returns 0 to indicate successful completion.
*/
int main(void)
{
	char *buff, **word_list;
	int i, word_count;
	int status = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			printf("Shell:# ");
		}
		buff = read_prompt();
		if (strcmp(buff, "exit") == 0 || strcmp(buff, "quit") == 0)
		{
			free(buff);
			break;
		}
		if (strcmp(buff, "env") == 0 || strcmp(buff, "printenv") == 0)
		{
			print_env();
			free(buff);
			return (0);
		}
		word_list = split_string(buff, &word_count);
		if (word_count > 0)
		{
			status = exec_command(word_list);
		}
		for (i = 0; word_list[i] != NULL; i++)
		{
			free(word_list[i]);
			word_list[i] = NULL;
		}
		free(word_list);
		free(buff);
	}
	return (status);
}
