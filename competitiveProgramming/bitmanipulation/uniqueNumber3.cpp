#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,no;
    cin >> n;

    int arr[64] = {0};

    for(int i =0; i< n; i++){
        cin>>no;
        //update count array by extracting bits

        int j = 0;

        while(no > 0){

            int l_b = (no&1);
            arr[j] += l_b;
            j++;
            no = no >> 1;

        }

    }

     int ans = 0;
    int p = 1;

  for (int i=0;i<64;i++){
        arr[i] = arr[i]%3;
         ans += p*arr[i];
          p *= 2;
    }

  

    cout<<ans<<endl;


}