#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int b1[3];
        int b2[3];
        int b3[3];

        for (int i = 0; i <3;i++){
            cin>>b1[i];
        }
        for (int i = 0; i <3;i++){
            cin>>b2[i];
        }
        for (int i = 0; i <3;i++){
            cin>>b3[i];
        }

        int count = 0;

        if(b1[0] == b2[1] == b3[2]){
            cout<<0<<endl;
        }
        else{

            if(b1[1] == b2[0]){
                count = count + b1[1];
            }

            if(b1[2] == b3[0]){
                count = count + b1[2];
            }

            if(b2[2] == b3[1]){
                count = count + b2[2];
            }

        }

        cout<<count<<endl;


    }
}