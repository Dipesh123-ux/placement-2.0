#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* add_node(struct node *ptr , int data) {

    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;

    return temp;

}

int main ()
{
    struct node *head = malloc (sizeof (struct node));
    head->data = 23;
    head->link =NULL;
    struct node *ptr = head;
    ptr = add_node(ptr , 27);
    ptr = add_node(ptr , 31);
    ptr = add_node(ptr ,35);

    ptr = head;

    while (ptr != NULL)
    {
        printf ("%d ",ptr->data);
        ptr = ptr->link;
    }
    
}