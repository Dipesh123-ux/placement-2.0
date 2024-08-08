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

// recursive solution

// bool searchKey(Node *root,int x){
//    if(root == NULL)
//    {
//        return false;
//    }
//    else if(root->key == x)
//    {
//        return true;
//    }
//    else if(x < root->key)
//    {
//       return  searchKey(root->left, x);
//    }
//    else
//    {
//        return searchKey(root->right, x);
//    }

// }

// iterative solution

bool searchKey(Node *root, int x){
    while(root != NULL){
        if(root->key == x){
            return true;
        }
        else if(root->key > x){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }

    return false;
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


    cout<<searchKey(root,18);






}