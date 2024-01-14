#include "header.h"
/**
  */
char *path_env(char *command)
{
	char *path, *path_copy;

	path = get_env_value("PATH");
	path_copy = strdup(path);

}
