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

void inorder(Node *root)   // left --> root --> right
{
    if(root != NULL) {
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}

int preIndex = 0;

Node *tree(int in[] , int pre[] , int is , int ie)
{
    if(is > ie)
    {
        return NULL;
    }
    Node *root = new Node(pre[preIndex++]);
    int inIndex;

    for(int i = is; i <= ie; i++)
    {
        if(in[i] == root->key)
        {
            inIndex = i;
            break;
        }
    }

    root->left = tree(in,pre,is,inIndex - 1);
    root->right = tree(in,pre,inIndex + 1,ie);
    return root;
}

int main ()
{
    int n;
    cin>>n;
    int in[n] , pre[n];
    cout<<"Enter Inorder traversal array :";
    for(int i=0; i<n; i++)
    {
        cin>>in[i];
    }
    cout<<"Enter Preorder traversal array :";
    for(int i=0; i<n; i++)
    {
        cin>>pre[i];
    }
    inorder(tree(in,pre,0 , n - 1)); 
}