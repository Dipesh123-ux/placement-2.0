#include<bits/stdc++.h>
using namespace std;

// list is doubly-linked list

int main(){


// list<int> l{1,2,3,4,5};

// l.push_back(6);
// l.push_front(0);
// l.reverse();
// l.pop_front();

// for(int x : l){
//     cout << x <<" ";
// }

list<string> l{"mango","apple","orange"};

for(string s : l){
    cout<<s<<" --> ";
}

cout<<endl;

string s;
cin >> s;

l.remove(s);

for(string s : l){
    cout<<s<<" --> ";
}




}