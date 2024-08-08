#include<bits/stdc++.h>
using namespace std;

int largestSubarraywithsumk(int arr[],int n,int k){
    int i = 0 , j = 0;
    int sum = 0;
    int ans = INT_MIN;
    while(j < n){
        sum += arr[j];
        if(sum < k){
            j++;
        }
        else if(sum == k){
            ans = max(ans,j-i+1);
            j++;
        }
        else{
           while(sum > k){
              sum -= arr[i];
              i++;
           }
           j++;
        }
    }
    return ans;
}

int main(){

    int n , k;
    cin >>n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >>a[i];
    }
    cout<<largestSubarraywithsumk(a,n,k);

}