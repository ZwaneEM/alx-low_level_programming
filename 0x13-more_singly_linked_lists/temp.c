#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int i;
    struct list *next;
} list_t;

int check_node(list_t *head)
{
    list_t *current;
    
    current = head;
    
    while (head)
    {
        if (current->next == head)
        {
            return (1);
        }
        
        if (current->next == NULL)
            break;
        current = current->next;
    }
    
    return (-1);
}

int main(void)
{
    list_t *head = NULL;
    list_t *node1, *node2;
    
    node1 = malloc(sizeof(list_t));
    node2 = malloc(sizeof(list_t));
    
    head = node1;
    
    node1->i = 4;
    node2->i = 8;
    
    node1->next = node2;
    node2->next = head;
    
    n = check_node(head);
 
    printf("%d\n", n);
    
    return (0);
    
}
