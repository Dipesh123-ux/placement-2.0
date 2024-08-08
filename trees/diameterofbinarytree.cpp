#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left , *right = NULL;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    
    }
};

int heightoftree(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return(max(heightoftree(root->left), heightoftree(root->right)) + 1);
}

int DiameterOfTree(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int d = 1 + heightoftree(root->left) + heightoftree(root->right);
    int  d1 = DiameterOfTree(root->left);
    int d2 = DiameterOfTree(root->right);

    return (max(d , max(d1, d2)));

}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->left->left = new Node(50);
    root->right->right = new Node(60);
    root->right->right->right = new Node(70);


    cout<<DiameterOfTree(root)<<endl;

}