#include<bits/stdc++.h>
using namespace std;

// map is the self balancing bst where ordering is determined by the keys 

int main(){

    map<string,int> m;

    // methods of insertion in map

    m.insert(make_pair("mango",100));

    pair<string,int> p;
    p.first = "apple";
    p.second = 120;

    m.insert(p);

    m["banana"] = 60;

    // search in map

    string fruit;
    cin >> fruit;

    // auto it = m.find(fruit);

    // if(it != m.end()){
    //     cout<<"Price of "<<fruit<<" is: "<<m[fruit]<<endl;
    // }
    // else{
    //     cout<<"Fruit is not present"<<endl;
    // }

    // map only stores unique keys only once it will update the key

    if(m.count(fruit)){
        cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
    }


    m.erase(fruit); // remove the key

}