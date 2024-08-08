#include<bits/stdc++.h>
using namespace std;


void flowerBed(int arr[],int n , int f){

    int count = 0;


    if(n == 1 && arr[0] == 0 && f == 1){
        f = 0 ;
    }

       
       if(arr[0] == 0 && arr[1] == 0){
           f--;
       }

     if((arr[n-1] == 0 && arr[n-2] == 0) && f >= 1 && n > ){ 
           f--;
       }
        

        for(int i=0; i<n; i++){

        
                 if(arr[i] == 0){
                 count++;
                if(count%2 == 1 && count != 1){

                    if(f > 0){

                        f--;
                    }

                   
                }
            }
            else if(arr[i] == 1){
                count = 0;
            }



        }

     


        cout<<f<<endl;


}




int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int f;
        cin>>f;

        flowerBed(arr,n,f);

        // cout<<ans<<endl;

    }

}