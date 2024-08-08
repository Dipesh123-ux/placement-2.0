#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left , *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

Node *insert(Node *root,int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL , *curr = root;
    while(curr != NULL)
    {
        parent = curr;
        if(curr->key > x)
        {
            curr = curr->left;
        }
        else if(curr->key < x)
        {
            curr = curr->right;
        }
        else {
            return root;
        }
    }

    if(parent == NULL)
    {
        return temp;
    }
      if(parent->key > x)
    {
        parent->left = temp;
    }
    else {
        parent->right = temp;
    }

    return root;
}

bool searchKey(Node *root,int x){
   if(root == NULL)
   {
       return false;
   }
   else if(root->key == x)
   {
       return true;
   }
   else if(x < root->key)
   {
      return  searchKey(root->left, x);
   }
   else
   {
       return searchKey(root->right, x);
   }

}


int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->right= new Node(80);
    root->right->left->left = new Node(16);


   insert(root,10);
   cout<<searchKey(root,10);






}