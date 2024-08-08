#include<bits/stdc++.h>
using namespace std;


long long getEfficiency(vector<int>&skills){
    int n = skills.size();
    map<long long,long long> m;
    sort(skills.begin(),skills.end());
    long long i = 0 , long long j = n - 1;

    long long ans = 0;

    while(i < j){
        m[skills[i]+skills[j]]++;
        if(m.size() > 1){
            return -1;
        }
        else{
           ans += (skills[i]*skills[j]);
        }

        i++;
        j--;
    }

    return ans;

}

int main(){

    int n;
    cin>>n;
    vector<int> skills;

    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        skills.push_back(k);
    }

    cout<<getEfficiency(skills);

}