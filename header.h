#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
char read_prompt(void);
char **split_string(char *str, int *num_words);
int exec_command (char **word_list);
int print_env(void);
char *get_env(char* name);
char *path_env(char *command);

#endif
