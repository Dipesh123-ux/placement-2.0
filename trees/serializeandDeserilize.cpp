#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left , *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

const int empty = -1;

void Serialize(Node *root,vector<int>&arr)
{
    if(root == NULL)
    {
        arr.push_back(empty);
        return;
    }
    arr.push_back(root->key);
    Serialize(root->left,arr);
    Serialize(root->right,arr);
}
int index = 0;
Node *Deserialize(vector<int>&arr)
{
    if(index == arr.size())
    {
        return NULL;
    }
    int val = arr[index];
    index++;
    if(val == empty)
    {
        return NULL;
    }
    Node *root = new Node(val);
    root->left = Deserialize(arr);
    root->right = Deserialize(arr);
    return root;
}


int main ()
{
    vector<int *>arr;
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    root->left->right->left = new Node(100);
    root->left->right->right = new Node(110);
    root->right->left->left = new Node(120);
    Serialize(root,arr);
    Deserialize(arr);

    
}