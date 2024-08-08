#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct stacks
{
    int size;
    int top;
    int *s;
};

// adding an element into the stack
void push(struct stacks *st , int data)
{
     if(st->top == st->size - 1)
     {
          cout<<"stack overflow";
     }
     st->top++;
     st->s[st->top] = data;

     
}
// deleting an element from the stack
int pop(struct stacks *st)
{
    int x = -1;
    if(st->top == -1)
    {
        cout<<"stack underflow";
    }
    else
    {
      x = st->s[st->top];  
      st->top--;

    }
    return x;
}
// getting an element at the particular index
int peek(struct stacks st , int pos)
{
    int index  = st.top - pos + 1;
    if(index < 0)
    {
        cout<<"position Invalid";
        return -1;
    }
  else
  {
    return  st.s[index];
  }
}

// getting top element of the stacks

int stack_top(struct stacks *st)
{
    if(st->top == - 1)
    {
        return -1;
    }
    else 
     return st->s[st->top];
}

int is_empty(struct stacks *st)
{
    if(st->top == -1)
    {
        return 1;
    }
    else
     return 0;  
}

int is_full(struct stacks *st)
{
    if(st->top == st->size - 1)
    {
        return 1;
    }
    else
      return 0;
}

void print_stack(struct stacks *st )
{
    int i;
    for(i=st->top;i>=0;i--)
    {
        cout<<st->s[i]<<" ";
    }
}

void create(struct stacks *st)
{
    cout<<"Enter size of stack : ";
    cin>>st->size;
    st->top = -1;
    st->s = new int[st->size];
}


int main ()
{
    struct stacks st;
     
    create(&st);

    push(&st, 1);
    push(&st, 2);
    push(&st, 3);
    push(&st, 4);

    cout<<"deleted element : "<<pop(&st)<<endl;

    print_stack(&st);





    
 

}