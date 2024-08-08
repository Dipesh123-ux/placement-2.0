#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left ,*right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

int maxLen = 0;

void printLeft(Node *root , int level)
{
   if(root == NULL)
   {
       return;
   }
   if(maxLen < level)
   {
       cout<<root->key<<" ";
       maxLen = level;
   }
   printLeft(root->left, level + 1);
   printLeft(root->right, level + 1);

}




int main ()
{
     Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    printLeft(root , 1);
}