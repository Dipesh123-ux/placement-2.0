#include <iostream>
using namespace std;

class student
{
    // private 
    string name;
    public:
    
    int age;
    bool gender;
    
    // to access private data members we create a fucntion
    // constructor
    student(string s , int a , bool g)
     {
        name = s;
        age = a;
        gender = g;

     }
    
 

    void printInfo()
    {
        cout<<"Name =";
        cout<<name;
        cout<<"Age =";
        cout<<age;
        cout<<"Gender =";
        cout<<gender;

     }

};

/*int main ()

{
    student a; // object of class student
    a.name = "james";
    a.age = 40;
    a.gender = 1;

    cout<<a.name<<" "<<a.age<<" "<<a.gender<<endl;

}
*/
//if you want to take data of more than two students
/*
int main ()
{
    student arr[3];
    int i;
    for(i=0;i<3;i++){
        cin>>arr[i].name>>arr[i].age>>arr[i].gender;
        
    }
    for(i = 0 ; i <3;i++){
        cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].gender<<" ";
    }

}
*/
int main ()
{
    student b("urvi" , 20 , 1);        
     b.printInfo();

}