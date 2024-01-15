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
	pid_t child_pid;
	char *command;

	command = path_env(*word_list);

	if (command == NULL || stat(command, &st) != 0)
	{
		fprintf(stderr, "./hsh: 1: %s: not found\n", wordList[0]);
		return(127);
	}

	child_pid = fork();

	if (process == -1)
	{
		return (1);
	}

	if (process != 0)
	


	if (command != wor
		if (child_pid == 0)
		{
			char *command = "/bin/ls";
			char *args[] = {command, "-l", "/tmp", NULL};

			if (stat(command, &st) != 0)
			{
				printf("%s Command not found\n", command);
				free(command);
				return(1);
			}

			if (execve(command, args, NULL) == -1)
			{
				perror("Error executing command");
				return 1;
			}
		}
	
		else
		{
			wait(&status);
		}
	}
	return (0);
}
