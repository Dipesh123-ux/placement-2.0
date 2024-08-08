#include <iostream>
using namespace std;

int main() {
       int t;
       cin>>t;
       
       while(t--){
           int arr[100000];
           int n;
           cin>>n;
           int i =0;
           int size = n;
           
           int count = 0;
           
           for(int i =0 ;i < n;i++){
               cin>>arr[i];
           }
           
           while(size--){
               if(arr[i]==i+1){
                   n++;
                   size++;
                   for(int j = n-1;j > i; j--){
                       arr[j] = arr[j-1];
                   }
                   
                   arr[i] = i;
                   count++;
               }
               
               i++;
           }

           cout<<count<<endl;
              
           
       }
}
