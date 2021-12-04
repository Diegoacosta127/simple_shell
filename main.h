#ifndef HEADER_SHELL
#define HEADER_SHELL
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>
void fork_wait(void);
char **split(char *, char *);
extern char **environ;
char *_getenv(const char *);
void shell_reset(char **input, char ***token_list);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_getenv(const char *name);
typedef struct path_t
{
char *str;
int len;
struct path_t *next;

} list_t;
list_t *add_node_end(list_t **head, char *str, int n);
list_t *get_path(char *str, list_t **head);
char *findpath(char *str, list_t *path);
size_t print_list(list_t *h);
void free_list(list_t *head);
#endif
