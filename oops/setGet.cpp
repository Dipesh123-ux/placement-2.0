#include <bits/stdc++.h>
using namespace std;

class Book{
    private:
    int page;
    float price;
    string name;

    public : 

    // setter functions 

    void setPage(int p){
        page = p;
    }

    void setPrice(float pr){
        price = pr;
    }

    void setName(string s){
        name = s;
    }

    // void display(){
    //     cout << "The page is : " << page <<endl;
    //     cout << "The name is : " << name <<endl;
    //     cout << "The price is : " << price <<endl;
    // }

    // getter functions

    int getPage(){
        return page;
    }

    float getPrice(){
        return price;
    }

    string getName(){
        return name;
    }



};

main (){
    Book b;
    cout << "---------BOOK DATA---------" << endl;
    b.setPage(265);
    b.setName("RICH DAD POOR DAD");
    b.setPrice(470);

    cout << "The name of the book is : "<<b.getName()<<endl;
    cout << "The number of pages the book is : "<<b.getPage()<<endl;
    cout << "The price of the book is : "<<b.getPrice()<<endl;

}