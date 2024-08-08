#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*front = NULL , *rear = NULL;

void enqueue(int x)
{
    struct node *p = malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;
    if(p == NULL)
    {
        printf("queue is full");
    }
    else if(front == NULL)
    {
  
    front = rear = p;
    }
    else
    {
        rear->next = p;
        rear = p;
    }
}

int dequeue()
{
    int x = -1;
    struct node *t;
    if(front == NULL)
    {
        printf("queue is empty");
    }
    else
    {
        t = front;
        front = front->next;
        x = t->data;
        free(t);
    }

    return x;


}

void display()
{
    struct node *p = front;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }

}

int main()
{
     enqueue(10);
     enqueue(20);
     enqueue(30);
     enqueue(40);
     dequeue();
     display();
}