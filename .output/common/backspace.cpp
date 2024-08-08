#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    int ans = INT_MIN;

    for(int i = 0 ; i < s.length();i++){
             if(s[i] == d){
             
                if(i == 0){
                    a = stoi(s.substr(1,s.length()));
                    cout<<a<<endl;
                }
                else if(i == s.length()-1){
                    a = stoi(s.substr(0,s.length()-1));
                    cout<<a<<endl;
                }
                else{
                        a = stoi((s.substr(0,i) + s.substr(i+1,s.length())));
                        cout<<a<<endl;
                
                }

                ans = max(ans,a);
            }
        }

        to_string(ans);



}