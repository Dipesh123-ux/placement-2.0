#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
void add_node(struct node *head , int data)
{
    struct node *ptr;
    ptr = head;
    struct node *temp = malloc (sizeof (struct node));
    temp->data = data;
    temp->link =NULL;
    while(ptr -> link != NULL)
    {
        ptr = ptr->link;
    }
    ptr ->link = temp;

}
void  add_pos(struct node *head, int data , int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc (sizeof (struct node));
    ptr2->data = data;
    ptr2 ->link = NULL;
    pos--;
    while(pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
int main ()
{
    struct node *head =malloc (sizeof (struct node));
    head->data =25;
    head->link =NULL;

    add_node(head , 30);
    add_node(head , 40);

    int data , position;
    printf ("Enter Position:");
    scanf("%d",&position);
    printf("Enter data:");
    scanf("%d",&data);
    
    add_pos(head , data , position);

    struct node *ptr = head;

    while (ptr != NULL)
    {
        printf ("%d ",ptr->data);
        ptr = ptr->link;
    }
    



}
    