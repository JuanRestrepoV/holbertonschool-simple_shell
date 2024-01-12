#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

char **splitString(char *str, int *num_words);

#endif
