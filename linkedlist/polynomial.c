#include <stdio.h>
#include <stdlib.h>

struct node {
    float coeff;
    int expo;
    struct node *link;

};

struct node* insert(struct node* head , float coe , int ex)
{
    struct node* temp;
    struct node* newP = malloc(sizeof(struct node));
    newP->coeff = coe;
    newP->expo = ex;
    newP->link = NULL;

    int key = ex;

    if(head == NULL || key > head->expo)
    {
        newP->link = head;
        head = newP;
    }
    else
    {
        temp = head;
        while(head->link != NULL && head->link->expo >= key)
            temp = temp->link;
          newP->link = temp->link;
          temp->link = newP;
    }

    return head;


}
struct node* create(struct node* head)
{
   int k ;
   int  i; 
   float coe;
   int expo;

   printf("Enter the number of terms:");
   scanf("%d",&k);
   
   for(i=1; i<= k ; i++)
   {
       printf("Enter coefficient of term %d :",i );
       scanf("%f",&coe);
       printf("Enter exponent of term %d :",i);
       scanf("%d",&expo);

       head = insert(head , coe , expo);

   }

   return head;

}
void print(struct node* head)
{
    if(head == NULL)
    {
        printf("No element in the list");
    }
    else
    {
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%.1fx^%d", temp->coeff, temp->expo);
        temp = temp->link;
        if(temp != NULL)
            printf(" + ");
        
        else
            printf("\n");

    }

    }

}
void polynomial_add(struct node *head1 , struct node *head2)
{
    struct node* ptr1 = head1;
    struct node* ptr2 = head2;
    struct node *head3 = NULL;

    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->expo == ptr2->expo)
        {
        head3 = insert(head3 , ptr1->coeff + ptr2->coeff , ptr1->expo);
        ptr1 = ptr1->link;
        ptr2 = ptr2->link;
        }
        else if(ptr1->expo > ptr2->expo)
        {
            head3 = insert(head3 , ptr1->coeff , ptr1->expo);
            ptr1 = ptr1->link;  
        }
        else if(ptr1->expo < ptr2->expo)
        {
            head3 = insert(head3 , ptr2->coeff , ptr2->expo);
            ptr2 = ptr2->link;  
        }

    }
    while(ptr1 != NULL)
    {
        head3 = insert(head3 , ptr1->coeff , ptr1->expo);
        ptr1 = ptr1->link;
    }
    
    while(ptr2 != NULL)
    {
        head3 = insert(head3 , ptr2->coeff , ptr2->expo);
        ptr2 = ptr2->link;
    }

    printf("Added polynomial :\n");
    print(head3);
    

}
int main ()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    printf("Enter the first polynomial :\n");
    head1 = create(head1);
    printf("Enter the second polynomial :\n");
    head2 = create(head2);
    polynomial_add(head1, head2);
    return 0;
}