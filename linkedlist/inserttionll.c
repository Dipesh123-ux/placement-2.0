#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *insert(struct node *head , int data)
{
    struct node *p , *q;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    int x = data;
    p = head;
    while(p->link != NULL && p->data < x)
    {
            q = p;
            p = p->link;
        
    }
    q->link = temp;
    temp->link = p;
    return head;
}

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

int main ()
{
    struct node *head = malloc (sizeof (struct node));
    head->data =10;
    head->link =NULL;

    

    add_node(head , 20);
    add_node(head , 30);
    add_node(head , 40);
    add_node(head ,50);

    head = insert(head , 35);
    
    
    

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