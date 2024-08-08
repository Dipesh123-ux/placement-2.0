#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A , B , C , D , E;
        cin>>A>>B>>C>>D>>E;
        bool f1= false;
        bool f2= false;
        bool f3= false;
    

        if(A + B <= D && C <= E)
        {
            f1 = true;
        }
        else if(B + C <= D && A <= E)
        {
            f2 = true;
        }
        else if(A + C <= D && B <= E)
        {
            f3 = true;
        }
       
       if(f1 || f2 || f3)
       {
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }

    }
}