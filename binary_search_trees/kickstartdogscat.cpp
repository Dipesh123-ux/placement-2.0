#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int count = 0;
    cin >> t;
    while(t--)
    {
        count++;
        int n ,  d , c , m;
        int flag1 = 0 , flag2=0;
        int i;
        cin>>n>>d>>c>>m;
        char s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

     for( i=0; i<n; i++)
     {
         if(s[i] == 'D')
         {
             d--;
             c = c + m;
         }
         else if(s[i] == 'C')
         {
             c--;
         }
         
         if(s[i] != 'D')
         {
             flag1 = 1;
         }
         else
         {
             flag1 = 0;
         }

         if(c == 0 && i < n && d >= 0)
         {
             cout <<"Case"<<" "<<"#"<<count<<":"<<" "<<"NO"<<endl;
             break;
         }
        
     }
   



     if(c >= 0 && d >= 0 && i == n)
     {
         cout<<"Case"<<" "<<"#"<<count<<":"<<" "<<"YES"<<endl;
         
     }
     
     if(flag1)
     {
         cout<<"Case"<<" "<<"#"<<count<<":"<<" "<<"YES"<<endl;
         
     }
     

   
     
    }
}