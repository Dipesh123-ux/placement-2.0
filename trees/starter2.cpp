#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while (t--) {
       int n;
       cin>>n;
       int num;
       if(n ==1 )
       {
         num = pow(10,n-1);
       }
       else
       {
           num = pow(10,n-1) + 10*(n-1) -1;
       }
       
       int num2 = pow(10,n);
       while(num < num2) {
             num = num + 2; 
            if((num) % 3 == 0 && (num) % 9 != 0)
            {
                cout<<(num)<<endl;
                break;
            }
                
       }

   


   }
}