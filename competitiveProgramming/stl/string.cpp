#include<bits/stdc++.h>
using namespace std;

int main(){

    // string s0;
    // string s1("hello");

    // string s2 = "hello world";

    // string s3(s2);  // copy constructor

    // s1.empty(); returns wheather the string is empty or not 

    // s1.append("hello"); add more characters to the string

    // s1.clear(); removes all characters from the string


    // string s1 = "apple";
    // string s2 = "apple";

    // cout<<s1.compare(s2)<<endl; // returns 0 if both the strings are equal else return lexicographically order of strings i.e. returns an integer greater than or less than 0 

   // find substrings 

   string s = "I want to learn cp";

//    int in = s.find("learn");

//    cout<<in<<endl;

   // remove a word form the string

//    s.erase(in,6); // erase a word 

  

  for(auto i=s.begin(); i!=s.end(); i++){
      cout<<(*i)<<",";
  }
cout<<endl;
 // for each 

 for(auto i : s){
     cout<<i<<",";
 } 









}