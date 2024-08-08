#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int , int> m;
    m.insert({10 , 100});
    m[5] = 100;
    m.insert({20, 300});

    for(auto &x : m)
    {
        cout << x.first<<" ";
        cout<<x.second<<" ";
    }

  // if the keys of two pairs is identical, then new inserted key will be completely ignored 

  cout<<m.size()<<" ";
  cout<<m[30]<<" ";  // if we try to print the key using this bracket which is not present in the map then it will insert that key to the map as {key , 0};
  cout<<m.size()<<" ";

  // m.at(40); if the key which we are trying to access is not present in the map then at does not insert it in the map and gives exception values 
  // m.clear(); // removes all elements 

  // map.find(3); returns iterator to that element 

  for(auto it = map.begin(); it != map.end(); it++){
    cout<<(*it).first<<" ";
    cout<<(*it).second<<" "<<endl;
  }

  // auto it = m.lower_bound(3); returns iterator to the element just greater than or equal to the given element , if the key given key is greatest to the maximum element then it returns end element  
  // upper_bound returns the element just greater than value
  // erase function removes the set of key value pair and set of values  
}