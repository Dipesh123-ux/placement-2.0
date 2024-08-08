#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int dd , dt, ddm , sd , st , sdm;
        cin>>dd>>dt>>ddm;
        cin>>sd>>st>>sdm;

        int d = dd + dt + ddm;
        int s = sd + st + sdm;

        if(d > s){

            cout<<"DRAGON"<<endl;

        }
        else if(d < s){
            cout<<"SLOTH"<<endl;
        }
        else{

            if(dd > sd){
                cout<<"DRAGON"<<endl;
            }
            else if(dd == sd){

                if(dt > st){
                    cout<<"DRAGON"<<endl;
                }
                else if(dt == st){
                    cout<<"TIE"<<endl;
                }
                else{
                    cout<<"SLOTH"<<endl;
                }



            }
            else{
                cout<<"SLOTH"<<endl;
            }




        }






    }


   


}