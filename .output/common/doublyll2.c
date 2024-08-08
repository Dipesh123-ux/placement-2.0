#include <stdio.h>
#include <stdlib.h>

struct node 
{
   struct node *prev;
   int data;
   struct node *next;
};

struct node * addToempty(struct node* head , int data)
{
    struct node *temp = malloc (sizeof (struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    head = temp;
    return head;
}

struct node * addAtbeg(struct node * head , int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    temp->next = head;
    head->prev = temp;
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
struct node * addAtany(struct node *head , int data , int pos)
{
    struct node * temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    struct node *p1 , *p2;
    p1 = head;
    p2 = head;

    pos--;
    while(pos != 1)
    {
       p1 = p1 ->next;
       pos--;
    }

   if(p1->next == NULL)
    {
        p1->next = temp;
        temp-> prev = p1;
    }
    
    else 
    {
    p2 = p1->next;
    p1->next = temp;
    p2->prev = temp;
    temp->prev = p1;
    temp->next = p2;
    }
    
    return head;

}

int main ()
{
    struct node *head = malloc (sizeof (struct node));
    head = addToempty(head , 45);
    head = addAtbeg(head , 34);
    head = addAtEnd(head ,50);
    int pos , d;
    printf("Enter the position :\n");
    scanf("%d",&pos);
    printf("Enter the data :\n");
    scanf("%d",&d);
    if(pos == 1)
    {
        head = addAtbeg(head , d);
    }
    else
    {
    head =  addAtany(head , d , pos);
    }
    struct node *ptr = head;

    while(ptr != NULL)
    {
        printf("%d ",ptr-> data);
        ptr = ptr ->next;
    }

}