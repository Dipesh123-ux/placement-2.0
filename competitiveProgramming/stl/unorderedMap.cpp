#include<bits/stdc++.h>
using namespace std;

// hashtable


class Student{
    public:
    string firstName;
    string lastName;
    string roll;

    Student(string f , string l , string r){
        firstName = f;
        lastName = l;
        roll = r;
    }

    bool operator==(const Student &s) const{
        return roll == s.roll;
    }
};

class HashFn{
    public:
    size_t operator()(const Student &s) const {      
        return s.firstName.length() + s.lastName.length();
    }
};



int main(){

    unordered_map<Student,int,HashFn> student_map;

    // only difference is map is not sorted in it

    Student s1("Dipesh","Jaswani","029");
    Student s2("Yashika","Bajaj","098");
    Student s3("Dipesh","Singh","021");
    Student s4("Yashika","Bajaj","046");

    // add student marks to hashmap

    student_map[s1] = 98;
    student_map[s2] = 95;
    student_map[s3] = 100;
    student_map[s4] = 95;

    for(auto s : student_map){
        cout <<s.first.firstName<<" "<<s.first.roll<<" "<<"Marks "<<s.second<<endl;
    }



}