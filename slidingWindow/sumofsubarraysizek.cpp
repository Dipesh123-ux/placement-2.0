#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[],int n,int k){
   int i = 0 , j = 0;
   int sum = 0;
   int ans = INT_MIN;
   while(j < n){
     sum += arr[j];
     if(j-i+1 < k){
        j++;
     }
     else if(j-i+1 == k){
        ans = max(ans,sum);
        sum -= arr[i];
        j++;
        i++;
     }
   }
   return ans;
}

int main(){

    int n,k;
    cin >> n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

  int ans = getSum(a,n,k);
  cout<<ans<<endl;

}
