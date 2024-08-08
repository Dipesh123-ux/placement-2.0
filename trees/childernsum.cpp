#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left , *right;
    Node(int k)
    {
        key = k;
        left  = right = NULL;
    }
};

bool isSum(Node *root)
{
    if(root == NULL)
    {
        return true;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return true;
    }
    int sum = 0;
    if(root->left != NULL)
    {
        sum += root->left->key;
    }
    if(root->right != NULL)
    {
        sum += root->right->key;
    }
    return (sum == root->key && isSum(root->left) && isSum(root->right));
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(1);
    root->right->right = new Node(1);

    if(isSum(root) == true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}