#ifndef HEADER_SHELL
#define HEADER_SHELL
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
void fork_wait(void);
char **split(char *);
extern char **environ;
#endif
