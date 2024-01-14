#include "header.h"
/**
  */
char *pathEnv(char *command)
{
	char *path = get_env_value("PATH");
