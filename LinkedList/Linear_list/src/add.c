#include "../inc/utils.h"

s_node *new_node(int val)
{
    s_node *node;
    
    node = malloc(sizeof(s_node));
    if (!node)
        return (NULL);
    
    node->val = val;
    node->next = NULL;
    
    return (node);
}

void print_list(s_node *head)
{
    s_node *current;
    int i;
    
    current = head;
    i = 0;
    while (current)
    {
        printf("nodo <%d>, valore --> %d\n", i, current->val);
        current = current->next;
        i++;
    }
}

s_node *add_node(s_node *head, int val)
{
    s_node *new;

    new = new_node(val);
    if (!new)
        return (head);
    
    new->next = head;
    return (new);
}
