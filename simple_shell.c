#include "header.h"
/**
* main - Intialize the simple shell proram.
*
* Return: Always returns 0 to indicate successful completion.
*/
int main(void)
{
	int word_count;
	char *buff;
	char **word_list;

	while (1)
	{
		buff = prompt();
		
		if (strcmp(buff, "exit") == 0 || strcmp(buff, "quit") == 0)
		{
			free(buff);
			break;
		}
		word_list = split_string(buff, &word_count);

		if (word_count > 0)
		{
			exec_command(word_list);
		}
	}
	return(0);
}
