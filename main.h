#ifndef HEADER_SHELL
#define HEADER_SHELL
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
void fork_wait(void);
char **split(char *, char *);
extern char **environ;
char *_getenv(const char *);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
