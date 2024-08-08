#include<bits/stdc++.h>
using namespace std;

// char *strtok(char *s, char *delimiters)
//returns a token on each subsequent call
// on the first call function should be passed with string argument for 's'
// on subsequent call we should pass the string argument a null

int main(){

    char s[100] = "Today is a rainy day";

    char *ptr = strtok(s, " ");  // seperate string about " "
    cout<<ptr<<endl;

    while(ptr != NULL){
        ptr = strtok(NULL, " ");
        cout<<ptr<<endl;
    }


}