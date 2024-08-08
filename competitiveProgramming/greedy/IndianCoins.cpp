#include<bits/stdc++.h>
using namespace std;

// minimum numbers of coin required

int make_change(int *coins ,int n,int money){
    // greedy approach

    // upper bound gives iterator to the element which is just grater the given element

    int count = 0; 

     while(money > 0){
      int idx = upper_bound(coins,coins + n,money) - 1 - coins;

      money = money - coins[idx];

      cout<<coins[idx]<<" ";
      count++;
     } 
cout<<endl;
return count;  

}

int main(){

    int m;
    cin>>m;

    int coins[] = {1,2,5,10,20,50,100,200,500,2000}; // Indian coins 

    cout<<make_change(coins,10,m);


}