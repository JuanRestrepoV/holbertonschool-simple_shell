#include "header.h"
/**
* get_env - Return the value of the environment variable found.
*
* @name: Name of the command (environ. var.) get from the tokenization.
*
* Return: Pointer to the value of the environment variable.
*/
char *get_env(char* name)
{
	char **environ_copy;
	size_t len;

	if (name == NULL || environ == NULL)
	{
		return (NULL);
	}

	len = strlen(name);

	environ_copy = environ;

	while (*environ_copy != NULL)
	{
		if (strncmp(*environ_copy, name, len) == 0 && (*env_var)[len] == '=')
		{
			return (*env_var + len + 1);
		}
		environ_copy++;
	}
	return (NULL);
}
