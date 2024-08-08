#include <bits/stdc++.h>
using namespace std;

int maxDistToClosest(int arr[] , int n){     

    bool f = 0;
    int ind_1 = 0 , ind_2 = 0 , first_ind = INT_MAX , last_ind = INT_MIN;
    int ans = INT_MIN;

    for(int i = 0; i <n; i++){
        if(f== 0 && arr[i] == 1){
            ind_1 = i;
            f = 1;
        }
        if(f== 1 && arr[i] == 1){
            ind_2 = ind_1;
            ind_1 = i;
            ans = max(ans , abs(ind_2-ind_1)/2);

        }

        if(arr[i] == 1){
            first_ind = min(first_ind,i);
            last_ind = max(last_ind,i);
        }


    }


    ans = max(ans,first_ind);
    ans = max(ans, n -1 -last_ind); 

    return ans;                                    
                                    


    }








int main(){
    int t;
    cin >> t;

    while (t--){
        
        int n;
        cin>>n;

        int arr[n];

        for(int i =0;i <n; i++){
            cin >> arr[i];
        }

        int result = maxDistToClosest(arr,n);

        cout<<result<<endl;


    }
}