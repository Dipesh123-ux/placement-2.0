#include<stdio.h>
#include<stdlib.h>


struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct queue *q , int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size*sizeof(int));
}

void enque(struct queue *q , int data)
{
    if(q->rear == q->size - 1)
    {
        printf("queue is full");
    }
    q->rear++;
    q->Q[q->rear] = data;
}

int dequeue(struct queue *q )
{
    int x = -1;
    if(q->rear == q->front)
    {
        printf("queue is empty");
    }

    else
    {
    q->front++;
    x = q->Q[q->front];
    }

    return x;
    
}

void display(struct queue q)
{
    for(int i=q.front + 1; i <= q.rear;i++)
    {
        printf("%d ",q.Q[i]);
    }
}

int main()
{
    struct queue q;
    create(&q , 5);
    enque(&q , 10);
    enque(&q , 20);
    enque(&q , 30);
    enque(&q , 40);
    dequeue(&q);
    display(q);

}