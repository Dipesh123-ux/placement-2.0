#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;

    Node(int x){
        key = x;
        left = right = NULL;
    }
};

Node *previ = NULL , *first = NULL , *second = NULL;

void fixBst(Node *root){
    if(root == NULL) return;

    fixBst(root->left);

    if(previ != NULL && root->key < previ->key){
        if(first == NULL){
            first = previ;
        }
        second = root;
    }

     previ = root;
    fixBst(root->right);
}



int main (){

    Node *root = new Node(20);
    root->left = new Node(60);
    root->right = new Node(80);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->right->left = new Node(8);
    root->right->right = new Node(100);

   fixBst(root);

   cout<<first->key<<" "<<second->key;

}