#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node * prev;
    int data;
    struct node * next ;
};

struct node * addToempty(struct node *head , int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    head = temp;
    return head;
}
struct node *addAtEnd(struct node * head , int data)
{
    struct node *temp = malloc (sizeof (struct node));
    struct node *tp = head;
    temp->prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    

    while(tp -> next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp -> prev = tp;
    return head;


}
struct node * create_ll(struct node *head)
{
    int n , data; 
    printf("Enter the number of nodes :");
    scanf("%d",&n);
    
    if(n==0)
    {
        return head;
    }
    printf("Enter data for node 1 :");
    scanf("%d",&data);
    head = addToempty(head , data);

    for(int i =1 ; i< n; i++)
    {
        printf("Enter data for node %d :", i+1);
        scanf("%d",&data);
        head = addAtEnd(head , data);

    }

    return head;
}

struct node * reverse_ll(struct node *head)
{
    struct node *p1 , *p2;
    p1 = head;
    p2 = p1->next;

    p1->next = NULL;
    p1->prev = p2;

    while(p2 != NULL)
    {
        p2->prev=p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p2->prev;
    }
      head = p1;
      return head;

}

int main ()
{
   struct node *head = malloc(sizeof(struct node));
   head = create_ll(head);
   head = reverse_ll(head);
   struct node *ptr = head;

   while(ptr != NULL)
   {
       printf("%d ",ptr-> data);
       ptr = ptr -> next;  
   }


}
