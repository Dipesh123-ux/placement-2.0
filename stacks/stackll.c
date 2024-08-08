#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

};
struct node *top = NULL;

void push(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("Stack is full");
    }
    else
    {
        temp->data = x;
        temp->next = top;
        top = temp;

    }
}

int pop()
{
    int x = -1;
    if(top == NULL)
    {
        printf("Stack is empty");
    }
    else
       {
           struct node *p = top;
           top = top->next;
           x =p->data;
           free(p);

       }

       return x;
}

void display()
{
    struct node *p = top;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

int peek(int pos)
{
    struct node *p = top;

pos--;

for(int i=0;p!= NULL && i<pos;i++)
{
    p = p->next;
}


return p->data;


 
}


int main ()
{

    push(1);
    push(2);
    push(3);
    push(4);
    printf("%d is deleted\n",pop());
    printf("Element at position 2 is :%d\n",peek(2));
    display();


}
