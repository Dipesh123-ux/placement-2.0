#include <bits/stdc++.h>
using namespace std;

class Test{
    private:
    int n;
    public : 
    void inputData(){
        cout << "Enter number : ";
        cin >>n;
    }
    void outputData(){
        cout << "The value of n is: "<<n<<endl;
    }
};

main(){
    Test T;
    // T.n = 10; // this gives error because we are trying to access the private member 

    T.inputData();
    T.outputData();
}
