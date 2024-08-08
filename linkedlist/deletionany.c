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
struct node * delete_pos(struct node *head, int p)
{
  struct node *prev = head;
  struct node *current = head;
  if (head == NULL)
  {
      printf("List is empty");
  }  
  else if (p == 1)
  {
      head = current ->link;
      free(current);
      current = NULL;
}
else
{
  while(p != 1)
  {
      prev = current;
      current = current ->link;
      p--;
  }
  prev ->link = current ->link;
  free(current);
  current->link = NULL;
} 

  return head;
}





int main ()
{
    int p;
    struct node *head = malloc (sizeof (struct node));
    head->data =10;
    head->link =NULL;

    add_node(head , 20);
    add_node(head , 30);
    add_node(head , 40);

    printf("Enter the deleting position\n");
    scanf("%d",&p);

    head = delete_pos(head , p);

    
    
    

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