#include<bits/stdc++.h>
using namespace std;

// function inside the class body

// class student{

//     private :

//     int roll = 10;

//     public :

//     void display(){
//         cout<<"Roll: "<<roll<<endl;
//     }

 
// };

// function outside the class 


class student{

     private :

    // int roll = 10;

    public :

    void display(int);

 
};

void student :: display(int roll){
    cout<<"the roll is :"<<roll<<endl;
}

main(){
    student s;
    int roll;
    cin>>roll;
    s.display(roll);
    
}



