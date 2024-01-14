#include "header.h"
/**
  */
char *pathEnv(char *first_word)
{
	char *path = get_env_value("PATH");
