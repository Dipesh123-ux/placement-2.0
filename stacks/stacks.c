#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

void push (int data)
{
   if(top == MAX - 1)
   {
       printf("stack overflow\n");
       return;
   }
   top++;
   stack_arr[top] = data;
}
int pop()
{
    if(top == -1)
    {
        printf("stack underflow\n");
        exit(1);
    }
    int value = stack_arr[top];
    top--;
    return value;
 }

int isfull()
{
    if(top == MAX - 1)
        return 1;
    else 
    return 0;

}
int isempty()
{
    if(top == -1)
    {
        return 1;
    }
    else
      return 0;  

}
int top_element()
{
    if(isempty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    else return stack_arr[top];
}
void print()
{
    int i;
    if(top == -1)
    {
        printf("stack underflow");
    }
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack_arr[i]); 
    }

    printf("\n");


}
int main ()
{
    int data , choice;
 while(1)
 {
    printf("\n"); 
    printf("1.Push\n2.Pop\n3.Print the top element\n4.Print all the elements of the stack\n5.Quit\n\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    
    switch(choice)  
    {
     
    case 1:
          printf("Enter the data : ");
          scanf("%d",&data);
          push(data); 
          break;
    
    case 2:
          data = pop();
          printf("%d is deleted\n",data);
          break;
     case 3:
         printf("Top element is %d\n",top_element());
         break;
    case 4:
         print();
         break;
    case 5:
           exit(1);    

    default :
              printf("wrong choice\n");              
    }     
 }

}