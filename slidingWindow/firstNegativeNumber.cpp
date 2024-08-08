#include<bits/stdc++.h>
using namespace std;

void firstNegativeOfAllWindows(int arr[],int n,int k){
    queue<int> q;
    int i =0 , j = 0;
    while(j < n){
        if(arr[j] < 0){
            q.push(arr[j]); 
        }
        if(j - i + 1 < k){
            j++;
        }
        else{
            if(q.size() == 0){
                cout<<0<<" ";
            }
            else{
                cout<<q.front()<<" ";
            }
            if(arr[i] == q.front()){
                q.pop();
            }
            i++;
            j++;
        }
        
    }
   
}

int main(){

    int n,k;
    cin >> n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

  firstNegativeOfAllWindows(a,n,k);
  

}
