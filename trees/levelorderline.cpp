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

void levelorderline(Node *root,int &ans)
{
    if(root == NULL)
    {
        return;
    }
    queue <Node *> q;
    q.push(root);
    q.push(NULL);

    int sum = 0;

    while(q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();

        if(curr == NULL)
        {
            ans = max(ans,sum);
            sum  = 0;
            cout<<"\n";
            q.push(NULL);
            continue;
        }

        sum = sum + curr->key;

        cout<<(curr->key)<<" ";

        if(curr->left != NULL)
        {
            q.push(curr->left);
        }
        if(curr->right != NULL)
        {
            q.push(curr->right);
        }

    }  

    ans = max(ans,sum);


}

int main ()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    int ans = INT_MIN;
    levelorderline(root,ans);
    cout<<ans<<endl;

    
}