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
struct node * delete_first(struct node * head)
{
    
    head = head ->next;
    free(head->prev);
    return head;
}
struct node *delete_last(struct node *head)
{
    struct node *temp1 , *temp2;
    temp1 = head;

    while(temp1 -> next != NULL)
    {
       temp1 = temp1->next;
    }
    temp2 = temp1->prev;
    temp2->next = NULL;
    free(temp1);

    return head;

}
struct node *delete_any(struct node *head , int pos)
{
    struct node *temp , *p1 , *p2;
    temp = head;
    
    while(pos != 1)
    {
        temp = temp->next;
        pos--;
    }

    if(temp->next == NULL)
    {
        head = delete_last(head);
    }
    else
    {
    p1 = temp-> prev;
    p2 = temp->next;
    temp->prev= NULL;
    temp->next= NULL;
    free(temp);
    p1->next = p2;
    p2->prev = p1;
    }
    return head;

    

}

int main ()
{
   struct node *head = malloc(sizeof(struct node));
   head = create_ll(head);
   int pos;
   printf("Enter the deletion position :\n");
   scanf("%d",&pos);
   if (pos == 1)
   {
   head = delete_first(head);
   }
   else
   {
   head =  delete_any(head , pos);
   }
   struct node *ptr = head;

   while(ptr != NULL)
   {
       printf("%d ",ptr-> data);
       ptr = ptr -> next;  
   }


}
