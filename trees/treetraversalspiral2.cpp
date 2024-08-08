#include<bits/stdc++.h>
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

void treeSpiral(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    stack <Node *> s1;
    stack <Node *> s2;
    s1.push(root);

    while(s1.empty() == false)
    {
        Node *curr = s1.top();
        s1.pop();
        cout<<curr->key<<" ";
        if(curr->left != NULL)
        {
            s1.push(curr->left);
        }
        if(curr->right != NULL)
        {
            s1.push(curr->right);
        }


    }


    while(s2.empty() == false)
    {
        Node *curr2 = s2.top();
        s1.pop();
        cout<<curr2->key<<" ";
        if(curr2->right != NULL)
        {
            s1.push(curr2->right);
        }
        if(curr2->left != NULL)
        {
            s1.push(curr2->left);
        }


    }



}

int main ()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    treeSpiral(root);

}