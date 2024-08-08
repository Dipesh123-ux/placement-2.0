#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   
  if (n < 2) return false;

  if (n % 2 == 0) return (n == 2);

  int r = sqrt(n);
    
    for (int i = 3; i<= r; i += 2)
    {
        if (n % i == 0)
            return false;

    }
  
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        string sub;
        int p;

        bool flag = false;

        int l = s.length();

        for(int i = 0; i < l; i++){
            for(int j = 1; j <= l - i; j++){

                sub = s.substr(i , j);

                p = stoi(sub,0,2);

                if(isPrime(p)){
                    flag = true;
                }
               
            }
        }

        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}