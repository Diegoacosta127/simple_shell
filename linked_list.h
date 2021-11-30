#ifndef HEADER_LINKED_LIST
#define HEADER_LINKED_LIST
#include <stddef.h>
typedef struct dir_list
{
char *dir;
struct dir_list *next;
} list_t;
list_t *add_node_end(list_t **head, char *n);
size_t print_list(list_t *);
void free_list(list_t *);
#endif
