#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *Add_to_empty(int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = temp;
    temp ->next = temp;
    return temp;

}

struct node *add_At_beg(struct node *tail ,int data )
{
   struct node *new = Add_to_empty(data);
   if(tail == NULL)
   {
       return new;
   }
   else{
       struct node *temp = tail->next;
       new->next=temp;
       new->prev=tail;
       temp->prev= new;
       tail->next=new;

   }
   return tail;
}
struct node *Add_at_end(struct node *tail , int data)
{ 
    struct node *temp = tail->next;
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    tail->next=new;
    new->prev = tail;
    new->next = temp;
    temp->prev = new;
    tail =  new;
    return tail;

}
struct node * add_at_any(struct node*tail , int data , int pos)
{
    struct node *newp = Add_to_empty(data);
    if (tail == NULL)
    {
        return newp;
    }
    struct node *p = tail->next;
    
    while(pos != 1)
    {
        p = p->next;
        pos--;
    }
    newp->next = p->next;
    p->next = newp;
    newp->prev = p;
    p->next->prev=newp;
    if(p == tail)
    {
        tail = tail->next;
    }
    return tail;

}
struct node *delete_first(struct node *tail)
{
    if(tail == NULL)
    {
        return tail;
    }
    struct node *p = tail->next;
    if(p == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    tail->next = p->next;
    p->next->prev = tail;
    free(p);
    p = NULL;
    return tail;
}
struct node *delete_last(struct node *tail)
{
      if(tail == NULL)
    {
        return tail;
    }
    struct node *p ;
    if(p == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
  p = tail->prev;
  p->next = tail->next;
  tail->next->prev= p; 
  free(tail);
  tail = p;
  return tail;
   

}
struct node * delete_any(struct node *tail , int pos)
{
    struct node *temp = tail->next;
    while(pos != 1)
    {
        temp = temp->next;
        pos--;
    }
    struct node *temp2 = temp -> prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);
    if(temp == tail)
    tail = temp2;

    return tail;
}
struct node *print_data(struct node *tail)
{
    if(tail == NULL)
    {
        printf("No elements in the list ");
    }
    struct node *temp = tail->next;
    do
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    
}
int main ()
{
    struct node *tail;
    tail = Add_to_empty(10);
    tail = add_At_beg(tail , 5);
    tail = Add_at_end(tail , 20);
    /*tail = add_at_any(tail , 15 ,2);
    tail = delete_first(tail);*/
  //  tail = delete_last(tail);
  tail = delete_any(tail , 2);
    
    print_data(tail);

}