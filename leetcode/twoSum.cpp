#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void twoSum(vector<int>& nums) {
        

        vector<int> v;
        unordered_map<int,int> m;
        
        for(int i : nums){
             
              m[i]++;
          
        }

        for(auto p : m){
            cout << p.first <<" "<<p.second<<endl;
        }
        
        
    }
};

int main (){
    int n ;
    vector<int> v;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i < n; i++)
{
          cin>>nums[i];
}



Solution ans;

ans.twoSum(nums);






}