#include <iostream>
using namespace std;
   int doUnion(int a[], int n, int b[], int m)  {
        
        
        int count  = n + m;
        int k;
         if(m == n)
         {
             k = m;
         }
         else
         {

        k = (n > m)*m + (m > n)*n;
         
         }
        for(int i = 0 ; i < k; i++)
        {
            if(a[i] == b[i] )
            {
                count--;
            }
        }
        
        return count;
        
    }

int main()
{
    int n , m;
    cin>>n>>m;
    int a[n] ,b[m];
    for(int i = 0; i < n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < m;i++)
    {
        cin>>b[i];
    }
    cout<<doUnion(a , n , b , m);
}