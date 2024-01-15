#include "header.h"
/**
* exec_command - Executes the command found in the word_list obtain from
* split_string function.
* 
* @word_list: Double pointer to an array of words where the first word
* represents the command for execution.
*
* Return: 0 if succes.
*/
int exec_command (char **word_list)
{
	struct stat st;
	pid_t chd_process;
	char *command;

	command = path_env(word_list[0]);

	if (command == NULL || stat(command, &st) != 0)
	{
		fprintf(stderr, "./hsh: 1: %s: not found\n", word_list[0]);
		return(127);
	}

	chd_process = fork();

	if (chd_process < 0)
	{
		return (1);
	}
	if (chd_process > 0)
	{
		wait();
		return (0);
	}
	if (chd_process == 0)
	{
		if (execve(command, word_list, environ) == -1)
		{
			return (1);
		}
	}
	return (0);
}
