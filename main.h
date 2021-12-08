#ifndef HEADER_SHELL
#define HEADER_SHELL
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>
#include <stdarg.h>
void __exit(int x);
void fork_wait(void);
char **split(char *, char *);
char *_getenv(const char *, char **);
void var_reset(int numb, ...);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strncmp(const char *s1, const char *s2, size_t n);
/**
  * struct path_t - node list for path
  * @str: a token
  * @len: a length
  * @next: pointer to next
  */
typedef struct path_t
{
char *str;
int len;
struct path_t *next;
} list_t;

list_t *add_node_end(list_t **head, char *str, int n);
void get_path(char *str, list_t **head);
char *findpath(char *str, list_t *path);
size_t print_list(list_t *h);
void free_list(list_t *head);
void searchfile(char ***token_list);
int built_in(char **token_list);
char *holamanola(char **token_list, char **path, char **env, list_t **head);
extern char **environ;
void _env(void);
void INThandler(int);
#endif
