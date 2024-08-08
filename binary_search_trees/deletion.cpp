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

Node *getSuccessor(Node *curr)
{
   curr = curr->right;
   while(curr != NULL && curr->left != NULL)
   {
       curr = curr->left;
   }
   return curr;
}

Node *deletion(Node *root , int x)
{
    if(root == NULL)
    {
        return root;
    }
    else if(root->key > x)
    {
        root->left = deletion(root->left,x);
    }
    else if(root->key < x)
    {
        root->right = deletion(root->right,x);
    }
    else{
        if(root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;  
        }
        else if(root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = deletion(root->right,succ->key);
        }

      
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

    deletion(root,18);
    cout<<searchKey(root,18);






}