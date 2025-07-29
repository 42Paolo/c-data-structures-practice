#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <stdio.h>

// Definizione della struttura per nodo di lista concatenata
typedef struct s_node
{
    unsigned int val;
    struct s_node *next;
} s_node;

// Prototipi delle funzioni
s_node *add(s_node *head, unsigned int val);
s_node *add_node(s_node *head, int val);
s_node *remove_node(s_node *head, int val);
s_node *create_node(unsigned int val);
s_node *new_node(int val);
void free_list(s_node *head);
void print_list(s_node *head);

#endif
