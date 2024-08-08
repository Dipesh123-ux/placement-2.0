#include<bits/stdc++.h>
using namespace std;


 struct node {
      int val;
      node *next;
 };

 void add_node(node *head , int data)
{
   node *n;
  n = head;
  node *ptr;
  ptr->val = data;
  ptr->next =NULL;

  while (n->next != NULL)
  {
      n = n->next;
  }
  n->next = ptr;
}

node* sortList(node* head) {
        
        if(head == NULL || head->next == NULL){
            return head ;
        }
        
        int c = 0;
        node *p = head;
        node *p1 = head;
        node *p2 = head->next;
        
       while(p != NULL){
           c++;
           p = p->next;
       }
        
        for(int  i =0 ;i < c; i++){
            
            while(p2 != NULL){
                if(p1->val > p2->val){
                    swap(p1->val,p2->val);
                    p1 = p1->next;
                    p2 = p2->next;
                }
                
                p1 = head;
                p2 = head->next;
            }
        }
        
        return head;
        
    }

    void printList(node *head){
        node *p1 = head;

        while(p1 != NULL){
            cout<<p1->val<<" ";
            p1 = p1->next;
        }
    }

int main(){

    node *head = new node();
    add_node(head,10);
    add_node(head,40);
    add_node(head,30);
    add_node(head,20);

    sortList(head);

    printList(head);



}