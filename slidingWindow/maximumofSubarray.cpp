#include<bits/stdc++.h>
using namespace std;

void findMaximums(int nums[],int n,int k){
       int i=0;
        int j=0;
        list<int> l;
        while(j< n)
        {
          while(!l.empty() && l.back()<nums[j])
          {
             l.pop_back();
          }       
          l.push_back(nums[j]);  
            if(j-i+1<k)
                ++j;
            else if(j-i+1==k)
            {
                cout<<l.front()<<" ";
                if(nums[i]==l.front())
                    l.pop_front();
                ++i;
                ++j;
            }
        }
}

int main(){

    int n , k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

  findMaximums(arr,n,k);

}