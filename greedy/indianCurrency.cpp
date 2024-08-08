#include<bits/stdc++.h>
using namespace std;

int make_Change(int *coins ,int n, int money){

  int ans = 0;

    while(money > 0){
        int idx = upper_bound(coins,coins+n,money) - 1-coins;
         cout<<coins[idx]<<"+";
        money -= coins[idx];
        ans++;
    }
    cout<<endl;
    return ans;
}

int main(){

    int m;
    cin>>m;

    int coins[] = {1,2,5,10,20,50,100,200,500,2000};

    cout<<make_Change(coins, 10,m);

}