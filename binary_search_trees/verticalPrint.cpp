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

void verticalPrint(Node *root,int d , map<int,vector<int>> &m){

if(root == NULL){
    return;
}

m[d].push_back(root->key);

verticalPrint(root->left,d-1,m);
verticalPrint(root->right,d+1,m);

return;

}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->right= new Node(80);
    root->right->left->left = new Node(16);

    map<int,vector<int>> m;
    int d = 0;
    verticalPrint(root,d,m);

    for(auto p : m){
        for(auto i : p.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}