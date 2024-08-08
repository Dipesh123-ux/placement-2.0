#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }


};

void NodeatDistK(Node *root , int k)
{
    if(root == NULL)
    {
        return;
    }
   else if(k == 0)
    {
        cout<<(root->key)<<" ";
    }
    else
    {
         NodeatDistK(root->left , k-1);
         NodeatDistK(root->right , k-1);
    }
}

int main ()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->left->left = new Node(60);
    root->left->right = new Node(70);

    NodeatDistK(root , 2);

}   