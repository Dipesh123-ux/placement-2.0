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

struct node * reverse_ll(struct node *head)
{
    struct node *next = NULL;
    struct node *prev = NULL;

   while(head != NULL)
   {
    next = head -> link; 
    head ->link = prev;
    prev = head;
    head = next;
   }
   head = prev;
   return head;
} 

void traverse(struct node *head){
    while(head->link != NULL){
        printf("%d ",head->data);
        head = head->link;
    }
}

int main ()
{
     

    
   traverse(head);

  

    


    




}