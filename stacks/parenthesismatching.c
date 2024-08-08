#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *next;

};
struct node *top = NULL;

void push(char x)
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

char pop()
{
    char x = -1;
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
int is_balance(char *ex)
{


    for(int i = 0; ex[i] != '\0'; i++ )
    {
        if(ex[i] == '(')
        {
            push( ex[i]);
        }
        else if(ex[i] == ')')
        {
            if(top == NULL)
            {
                return 0;
            }
            pop();
        }

    }

     if(top == NULL)
     {
         return 1;
     }
     else
     return 0;

}

int main ()
{
    char *exp = "((a)+b)*(c-d))";
    printf("%d",is_balance(exp));
}