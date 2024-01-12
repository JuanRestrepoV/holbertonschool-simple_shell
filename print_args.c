#include <stdio.h>
/**
* main - Prints all command-line arguments.
* @ac: Number of arguments.
* @av: Array of arguments.
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
	char **arg = av;

	 while (*arg != NULL)
	 {
		 printf("%s\n", *arg);
		 arg++;
	 }
	 return 0;
}
