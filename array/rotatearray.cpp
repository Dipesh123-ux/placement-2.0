#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
          k = k%n;
    
            
           reverse(nums.begin(), nums.end() - k);

           for(int i =0 ; i < n; i++){
               cout << nums[i] <<" ";
           }

           cout<<endl;
            
         
            reverse(nums.end() - k, nums.end());
            
                 for(int i =0 ; i < n; i++){
               cout << nums[i] <<" ";
           }

           cout<<endl;

            reverse(nums.begin(), nums.end());

                 for(int i =0 ; i < n; i++){
               cout << nums[i] <<" ";
           }

           cout<<endl;
    }
        

int main(){

     int i = i=2*3/4+4/4+8-2+5/8;
    cout<<i<<endl;
    cout<<endl;
   
 int n;
 cin >> n; 
 vector<int> v(n);

 for(int i =0 ; i < n; i++){
     cin>>v[i];
 }

 int k;
 cin>>k;

rotate(v,k);


}