#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
}*stnode;
void create_list(int n);
void display_list();

int main ()
{
    int n;
    printf("Enter number of nodes:\n");
    scanf("%d",&n);

    create_list(n);
    display_list();
    
    
}
void create_list(int n)
{
    struct node *fnode , *temp;
    int num;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Enter data for node 1:");
        scanf("%d",&num);
        stnode->data = num;
        stnode->link = NULL;
        temp = stnode;

        for(int i = 2; i <= n; i++)
        {
            fnode = (struct node *)malloc(sizeof (struct node));
            if(fnode==NULL)
            {
                printf("List is empty");
            }
            else
            {
                printf("Enter data for node %d:",i);
                scanf("%d",&num);
                fnode->data = num;
                fnode->link =NULL;
                temp->link = fnode;
                temp = temp->link;
            }
        }
    }

}
void display_list()
{
    struct node *temp;
    
    if (stnode == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = stnode;
        while (temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->link;
        }
    }
    
}