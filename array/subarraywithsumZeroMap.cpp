#include<bits/stdc++.h>
using namespace std;

// has subarary with zero sum

bool subarrayWithSumZero(int arr[],int n){
    unordered_set<int> s;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];

        if(sum == 0 || s.find(sum) != s.end()){
            return true;
        }
        s.insert(sum);
    }

    return false;
}

// length of longest subarary with sum zero

int lengthOfLongestSubarray(int arr[],int n){
    unordered_map<int,int> m;
    int pre = 0;
    int len = 0;
    for(int i = 0; i < n; i++){
        pre += arr[i];
        if(arr[i] == 0){
            len = max(len,i+1);
        }
        if(m.find(pre) != m.end()){
            len = max(len,i - m[pre]);
        }
        else{
            m[pre] = i;
        }
    }

    return len;
}

int main(){

    int n;
    cin>> n;
    
    int arr[n];

    for(int i =0; i <n; i++){
        cin>> arr[i];
    }

    // cout<<subarrayWithSumZero(arr , n);
    cout<<lengthOfLongestSubarray(arr , n);

}