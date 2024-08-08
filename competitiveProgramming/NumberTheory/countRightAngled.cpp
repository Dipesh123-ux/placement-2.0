#include<bits/stdc++.h>
using namespace std;

//given A, count the number of right angled triangle in which the length of a non-hypothenus edge is A
// input A
// A^2 = C^2 - B^2  count all the integer pairs (b,c)

int countPairs(long long n){
    int count = 0;
    for(int i = 1; i *i < n; i++){
        if(n % i == 0){
            int x = i;
            int y = n/i;
            if(x < y && (x%2 == y%2)){
                count++;
            }
        }
    }
    return count;
}
int main(){

    int t;
    cin >> t;

    while(t--){
    long long A;
    cin >> A;
    cout<<countPairs(A*A)<<endl;
    }



}