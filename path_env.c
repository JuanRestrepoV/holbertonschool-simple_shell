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
	
	path = get_env_value("PATH");
	path_copy = strdup(path);
	route = NULL;

	directory = strtok(pat_copy, ":");
	while (directory != NULL)
	{
		size_t route_len;

		route_len = strlen(directory) + strlen(command);
		route = malloc(route_len);
		if (route == NULL)
		{
			free(path_copy);
			return(NULL);
		}
		sprintf(route, "%s/%s", directory, command);


}
