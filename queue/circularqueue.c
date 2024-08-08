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
    q->front = q->rear = 0;
    q->Q = (int *)malloc(q->size*sizeof(int));
}

void enque(struct queue *q , int data)
{
    if((q->rear + 1)%q->size == q->front)
    {
        printf("queue is full\n");
    }
    q->rear = (q->rear + 1)%q->size;
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
    q->front = (q->front + 1)%q->size;
    x = q->Q[q->front];
    }

    return x;
    
}

void display(struct queue q)
{
  int i = q.front + 1;

  do
  { 
      printf("%d ",q.Q[i]);
      i = (i + 1)%q.size;
  } while (i != (q.rear + 1)%q.size);
  
}

int main()
{
    struct queue q;
    create(&q , 5);
    enque(&q , 10);
    enque(&q , 20);
    enque(&q , 30);
    enque(&q , 40);
    enque(&q , 50);
    display(q);
    dequeue(&q);
    display(q);

}