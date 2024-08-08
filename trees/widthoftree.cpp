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

int width(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    queue <Node *> q;
    q.push(root);
    q.push(NULL);
    int count = q.size();
    while(q.size() > 1)
    {
        Node *curr = q.front();
         
        if(q.size() > count)
        {
            count = q.size();
        }
        q.pop();

        if(curr == NULL)
        {
            q.push(NULL);
            continue;
        }

        if(curr->left != NULL)
        {
            q.push(curr->left);
        }
        if(curr->right != NULL)
        {
            q.push(curr->right);
        }

    }  

    return count - 1;


}

int main ()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(80);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    cout<<width(root);

    
}