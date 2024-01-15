#include "header.h"
/**
* print_env - program that prints the environment using the global variable
* environ.
*
* Description: prints the environment variables.
*/
void print_env(void)
{
	int i;
	char **env = environ;

	for (i = 0; env[i] != NULL; i++)
	{
		printf("%s\n", env[i]);
	}
}
