#include<bits/stdc++.h>
using namespace std;

int clearRangeItoJ(int n , int i,int j){

    int m1  = -1 << j+1;
    int m2 = pow(2,i) - 1; // pow(2,i) == 1 << i
    int m = m1 | m2;

    n = n & m;
    return n;
    
}


int main(){

    int n , m;
    cin>>n>>m;
    int i , j;
    cin>>i>>j;

    n = clearRangeItoJ(n,i,j);
    m = m << i;

    int ans = n | m;
    cout<<ans<<endl;

}