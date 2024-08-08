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

void inorder(Node *root)   // left --> root --> right
{
    if(root != NULL) {
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}

void preorder(Node *root) {  //root --> left --> right

if(root != NULL) { 
  
  cout<<(root->key)<<" ";
  preorder(root->left);
  preorder(root->right);

} 
}

void postorder(Node *root) {  //left --> right --> root
 
 if(root != NULL) {
     postorder(root->left);
     postorder(root->right);
     cout<<(root->key)<<" ";
 }

}

int main ()
{
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
     root->left->left = new Node(2);
     root->left->right = new Node(4);
     root->right->right = new Node(8);
     root->right->right->right = new Node(9);
     root->right->right->left = new Node(7);
        root->left->left->left = new Node(1);         

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root); 
}