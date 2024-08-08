#include <bits/stdc++.h>
using namespace std;

int main ()
{
    set<int> s;  //increasing order
    set<int , greater<int>> s2; // decreasing order

    s.insert(40); 
    s.insert(20); 
    s.insert(30);  

    s2.insert(40); 
    s2.insert(20); 
    s2.insert(30); 

    for(int i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
        for(int i : s2)
    {
        cout<<i<<" ";
    }
  cout<<endl;
  //iterator
  for(auto it = s.begin(); it != s.end();it++)  
  {
      cout<<(*it)<<" ";
  }
  cout<<endl;
  for(auto it = s.rbegin(); it != s.rend();it++)  
  {
      cout<<(*it)<<" ";
  }

// set ignores the duplicate elements 

 // s.find(10);  returns iterator to the element

 //s.clear();  removes all the elements 

//s.count(); returns 1 if element is present and return 0 if not

//s.erase(20); remove an element and group of elements

// auto it = s.lower_bound(12); // returns iterator to the element just greater than or equal to the given element 

//if(it != s.end()){ cout<<(*it)<<" " }

// auto it = s.upper_bound(12); // returns iterator to the element just greater than the given element 
 

}