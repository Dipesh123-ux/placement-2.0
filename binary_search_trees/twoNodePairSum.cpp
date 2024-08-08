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

bool pairSum(Node *root , int sum , unordered_set<int> &s){
    if(root == NULL) return false;

    if(pairSum(root->left , sum , s) == true) return true;

    if(s.find(sum - root->key) != s.end()){
        return true;
    }
    else{
        s.insert(root->key);
    }
  
   return  pairSum(root->right, sum,s);

}



int main (){

    Node *root = new Node(20);
    root->left = new Node(60);
    root->right = new Node(80);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->right->left = new Node(8);
    root->right->right = new Node(100);

    unordered_set<int> s;

    cout<<pairSum(root,18,s)<<endl; 
    cout<<pairSum(root,62,s);

}