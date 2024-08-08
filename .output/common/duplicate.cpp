#include <iostream>
#include <climits>

using namespace std;

int main ()
{
    int n; 
    cin>>n;
    int array[n];
    int i ;
    for(i=0; i<n ; i++)
    {
         cin>>array[i];
    }
    int min = array[0];
    int max = array[0];
    for(i=1; i<n; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    for(i=1; i<n; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    int sum = 0;
    for(i = min; i<= max; i++)
    {
        sum = sum + i;
    }
     int ans = sum;
    for(i=0; i<n; i++)
    {
       ans = ans -array[i];
    }
    int m = -(ans);
    cout<<m;
}
