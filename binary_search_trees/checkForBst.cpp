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


bool checkBst(Node *root , int min , int max){
    if(root == NULL){
        return true;
    }

    return(root->key > min && root->key < max &&  checkBst(root->left, min, root->key) && checkBst(root->right, root->key,max));

}

int prev = INT_MIN;

bool inBst(Node *root){
    if(root == NULL){
        return true;
    }
    if(inBst(root->left) == false){
        return false;
    }

    if(root->key <= prev) return false;

    prev = root->key;

    return inBst(root->right);


}


int main (){

    Node *root = new Node(80);
    root->left = new Node(70);
    root->right = new Node(90);
    root->left->left = new Node(60);
    root->left->right = new Node(75);
    root->right->left = new Node(85);
    root->right->right = new Node(100);

    cout<<checkBst(root , INT_MIN,INT_MAX);
    cout<<inBst(root);


}