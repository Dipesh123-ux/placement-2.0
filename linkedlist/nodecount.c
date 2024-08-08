#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
int count_node(struct node *head)
{
    int count =0;
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}
int main ()
{
    struct node *head = malloc (sizeof (struct node));
    head->data = 24;
    head->link =NULL;

    struct node *current = malloc (sizeof (struct node));
    current->data = 67;
    current->link =NULL;
    head->link =current;

    current = malloc (sizeof (struct node));
    current->data = 75;
    current->link =NULL;
    head->link ->link =current;

    count_node (head);
    printf("%d",count_node (head));
   
    
}