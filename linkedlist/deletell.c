#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void add_node(struct node *head , int data)
{
  struct node *new;
  new = head;
  struct node *ptr =malloc (sizeof (struct node));
  ptr->data = data;
  ptr->link =NULL;

  while (new ->link != NULL)
  {
      new = new ->link;
  }
  new ->link = ptr;
}

struct node *delete_ll(struct node * head)
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
}


int main ()
{
    struct node *head = malloc (sizeof (struct node));
    head->data =10;
    head->link =NULL;

    

    add_node(head , 20);
    add_node(head , 30);
    add_node(head , 40);
    add_node(head ,50);
    
    head = delete_ll(head);
    

    struct node *ptr = head;

    if (ptr == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d ",ptr -> data);
            ptr = ptr ->link;
        }
    }




}