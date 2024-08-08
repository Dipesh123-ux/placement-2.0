#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *add_toempty(int data)
{
    struct node *temp = malloc (sizeof (struct node));
    temp->data = data;
    temp->next =temp;
    return temp;
}

struct node *add_atbeg(struct node *tail , int data)
{
    struct node *newp = malloc(sizeof (struct node));
    newp->data = data;
    newp->next =NULL;
    newp->next = tail->next;
    tail->next = newp;
    return tail;

}

struct node *add_at_end(struct node *tail , int data)
{
   struct node *new = malloc(sizeof(struct node));
   new->data= data;
   new->next = tail->next;
   tail->next = new;
   tail = tail->next;
   return tail;
}

struct node *add_At_any_(struct node *tail , int data , int pos)
{
    struct node *p = tail->next;
    struct node *new = malloc(sizeof (struct node));
    new->data = data;
    new->next =NULL;
    while(pos != 1)
    {
        p = p->next;
        pos--;
    }
    new->next = p->next;
    p->next = new;
    if(p == tail)
    {
        tail = tail->next;
    }
    return tail;
}

struct node *circularlist(struct node *tail)
{
    int n , i , data;
    printf("Enter number of nodes :\n");
    scanf("%d",&n);
    if(n == 0)
    {
        return tail;
    }
    
    
        printf("Enter data for node 1 :\n");
        scanf("%d",&data);
        tail = add_toempty(data);

    for(i=2; i <= n; i++)
    {
        printf("Enter data for node %d : \n", i);
        scanf("%d",&data);
        tail = add_at_end(tail ,data);
    }

    return tail;
}


struct node * delete_first(struct node *tail)
{

    if(tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    struct node *p = tail->next;
    tail->next = p ->next;
     p->next = NULL;
    free(p);
    
    return tail;
}

struct node * delete_last(struct node *tail)
{

    struct node *temp = tail->next;
     if(tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    while(temp->next != tail)
    {
         temp = temp->next;
    }
    temp->next = tail->next;
    free(tail);
    tail = temp;
    return tail;
}

struct node *delete_any(struct node * tail , int pos)
{
 if(tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }

    struct node *p = tail->next;
    
    while(pos != 2 )
    {
        p = p->next;
        pos--;
    }
    struct node * q = p->next;
    p->next = q->next;
    if(q == tail)
    tail = p;
    free(q);
    q = NULL;
    return tail;

}

void count(struct node *tail)
{
    struct node *p = tail->next;
    int count = 1;
    while(p->next != tail->next)
    {
        count++;
        p = p->next;
    }
    printf("Number of nodes is:");
    printf(" %d\n",count);
}


void print_data(struct node *tail)
{
    struct node *p  = tail->next ;
    do
    {
        printf("%d ",p->data);
        p = p->next;
    } while (p != tail->next);
    
    
    
}

int search_position(struct node *tail , int key)
{
    struct node *p = tail->next;
    int count = 1;

     do
     {
         if(p->data == key)
         return count;
          p = p->next;
         count++;
        
     }while(p != tail->next);
     return -1;
}


int main ()
{
    struct node *tail ;
 /*   tail = add_toempty(45);
    tail = add_atbeg(tail , 35);
    tail = add_at_end(tail , 55);
    tail = add_At_any_(tail ,65 , 3);
    
*/
    tail =  circularlist(tail);
  /*  tail = delete_first(tail);
    tail = delete_last(tail);
  */  
   /* tail = delete_any(tail , 3); */

    print_data(tail);
    printf("\n");
    count(tail);

    int element;
    printf("Enter the element you want to search : ");
    scanf("%d",&element);
    int position = search_position(tail , element);
    if(position == -1)
    {
        printf("Element is not present in list");
    }
    else
    {
    printf("Element is present at node :\n");
    printf("%d",position);
    }

}