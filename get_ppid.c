#include <stdio.h>
#include <unistd.h>
/**
* get_ppid - Prints the PID of the parent process.
*
* Return: Always 0.
*/
int get_ppid(void)
{
	pid_t parent_pid;

	parent_pid = getppid();
	printf("Parent PID: %u\n", parent_pid);
	return (0);
}
