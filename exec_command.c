#include "header.h"
/**
* exercise fork, wait and execve
*/
int exec_command (char **word_list)
{
	struct stat st;
	pid_t child_pid;
	int status, i;

	for (i = 0; i < 5; ++i)
	{
		child_pid = fork();
		
		if (child_pid == -1)
		{
			perror("Error creating child process");
			return(1);
		}
	
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
