 #include <bits/stdc++.h>
using namespace std;
 

struct Node {
    int key;
    int lcount;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
        lcount = 0;
    }
};
Node* insert(Node* root, int x) {
    if (root == NULL)
        return new Node(x);
    if (x < root->key)
        root->left = insert(root->left, x);
        root->lcount++;
    else if (x > root->key)
        root->right = insert(root->right, x);
    return root;
}

Node *kthSmallest(Node *root , int &k)
{
    if(root == NULL) return NULL;
    if(root->lcount + 1 == k)
    {
        return root;
    }
    else if(root->lcount + 1 > k)
    {
         kthSmallest(root->left,k);
    }
    else
    {
        kthSmallest(root->right,k);
    }
}

int main()
{
    Node* root = NULL;
    int keys[] = { 20, 8, 22, 4, 12, 10, 14 };
 
    for (int x : keys)
        root = insert(root, x);
 
    int k = 3;
    cout<<KthSmallest(root, k);
    return 0;
}
 