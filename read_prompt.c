#include "header.h"
/**
* read_prompt - Read the line enter by the user in the stdin.
*
* Description: using the "getline" function this function obtains the user
* entered line and save it into a pointer of char type "buffer".
*
* Return: A pointer to a buffer whit the line already read.
*/
char read_prompt(void)
{
	char *buff = NULL;
	size_t buff_len = 0;
	ssize_t got_line;

	got_line = getline(&buff, &buff_len, stdin);

	if (got_line == -1)
	{
		free(buff);
		exit(0);
	}
	buff[strcspn(buffer, "\n")] = '\0';
	return (buff);
}
