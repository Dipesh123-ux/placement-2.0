#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

struct Node {
    int key;
    Node *left , *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};


Node* prev = NULL;  

Node *Binarytodll(Node *root)
{

   if(root == NULL)
   {
       return root;
   }  
 
    Node *head = Binarytodll(root->left);
    if(prev == NULL)
    {
        head = root; 
    } 
    else
    {
        root->left = prev;
        prev ->right = root;
    }   
    prev = root; 

    Binarytodll(root->right);

    return head;
}

int main ()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);
    struct Node *ptr = Binarytodll(root);

    if(ptr != NULL)
    {
        cout<<ptr->key<<" ";
        ptr = ptr->right;
    }


}