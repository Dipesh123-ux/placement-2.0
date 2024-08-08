#include<stdio.h>
#include<stdlib.h>


struct dequeue
{
    int size;
    int cap;
    int front;
    int rear;
    int *Q;
};

void create(struct dequeue *q , int cap) 
{
    q->cap = cap;
    q->size = 0;
    q->front = q->rear = 0;
    q->Q = (int *)malloc(q->cap*sizeof(int));
}

void insertfront(struct dequeue *q , int x)
{
    q->front = (q->front - 1 + q->cap)%q->cap;
    q->Q[q->front] = x;
    q->size++;
}
void insertrear(struct dequeue *q , int x)
{
    q->rear = (q->front + q->cap)%q->cap;
    q->Q[q->rear] = x;
    q->size++;
}
