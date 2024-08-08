#include<bits/stdc++.h>
using namespace std;

void printDivisors(int N){
    for(int i = 1; i*i <= N; i++){
        if(N % i == 0){
            cout <<i<<" ";
            if(i != N/i){
                cout <<N/i<<" ";
            }
        }
    }
}

void countDivisors(int n , vector<int> &v){
    for(int i=1; i<= n; i++){
        for(int j = i; j<= n; j+=i){
            v[j]++;
        }
    }
}

int main(){

    int n;
    cin >> n;
    vector<int> v(n+1);
    // printDivisors(n);
    countDivisors(n,v);
    for(int i=1; i<=n; i++){
          cout<<v[i]<<" ";
    }

}