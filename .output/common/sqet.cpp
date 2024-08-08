#include<bits/stdc++.h>
using namespace std;

int main(){

    double k;
    cin>>k;

    double a_prev = k;
    double a = (a_prev + (k/a_prev))/2;

    double ep = 1e-5;

    while((a_prev-a) >= ep){
        a_prev = a;
        a = (a + (k/a))/2;
    }


    cout<<a<<" "<<endl;

}   