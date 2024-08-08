#include<bits/stdc++.h>
using namespace std;


    struct node
    {
    int data;
    node* next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
    };
    void printlist(node* head)
    {
    
    node*curr=head;
    while(curr!=NULL)
    {
    cout<<curr->data;
    curr=curr->next;
    }
    }
    int main()
    {
        node*head=new node(10);
        node *first = new node(20);
        node *last = new node(30);
        head->next= first;
        first->next= last;
        last->next= NULL;

        printlist(head);
    
    }