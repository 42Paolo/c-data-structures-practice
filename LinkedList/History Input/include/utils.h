#include <unistd.h>
#include <stdlib.h>
#include <printf.h>

typedef struct s_node
{
    unsigned int val;
    struct s_node *next;
}s_node;

