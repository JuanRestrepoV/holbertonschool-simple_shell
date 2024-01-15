#include "header.h"
/**
* path_env - Gets the path of a command using the PATH env. varibale.
*
* @command: The command we are looking for its path.
*
* Return: The path of the command.
*/
char *path_env(char *command)
{
	char *path, *path_copy, *directory, *route;

	path = get_env("PATH");

	if (path == NULL || path[0] == '\0')
	{
		if (access(command, X_OK) == 0)
		{
			return(command);
		}
		else
			return(NULL);
	}
	path_copy = strdup(path);
	route = NULL;
	if (path_copy == NULL)
		return (NULL);
	directory = strtok(path_copy, ":");
	while (directory != NULL)
	{
		size_t route_len;

		route_len = strlen(directory) + strlen(command) + 2;
		route = malloc(route_len);
		if (route == NULL)
		{
			free(path_copy);
			return (route);
		}
		sprintf(route, "%s/%s", directory, command);
		if (access(route, X_OK) == 0)
		{
			free(path_copy);
			return(route);
		}
		free(route);
		directory = strtok(NULL, ":");
	}
	free(path_copy);
	return (command);
}
