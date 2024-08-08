#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }
    int max_sum = arr[0];
    int min_sum = arr[0];
    int res1 = arr[0];
    int res2 = arr[0];

    for(int i = 1; i < n; i ++)
    {
        max_sum = max(max_sum + arr[i] , arr[i]);
        res1 = max(res1 ,max_sum);
    }
  if(res1 < 0)
  {
      cout<<res1<<endl;
  }
else
{
   for(int i = 1 ; i < n ; i++)
   {
       min_sum = min(min_sum + arr[i] , arr[i]);
       res2 = min(res2 ,min_sum);
   }
   int sum = 0;
   for(int i = 0 ; i < n; i++)
   {
       sum = sum + arr[i];
   }

   int  res2_f = sum - res2;
   int final = max(res1 , res2_f);

   cout<<final << endl;

}

}