#include<bits/stdc++.h>
using namespace std;

template<typename T> 
class Node{
    public:
    string key;
    T value;
    Node<T>* next;

    Node(string key, T val){
        this->key = key;
        value = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }

};

template<typename T>
class Hashtable{

    Node<T>** table;
    int curr_size;
    int table_size;

    int hashFn(string key) {
        int idx = 0;
        int p = 1;

        for (int i = 0; i < key.length(); i++) {
             idx = idx + (key[i]*p)%table_size;
             idx = idx%table_size;
             p = (p*27)%table_size;

        }

        return idx;
    }

    void rehash(){
        Node<T>** oldTable = table;
        int oldTableSize = table_size;
        table_size = 2*table_size;
        table = new Node<T>*[table_size];

        for(int i = 0; i <table_size;i++){
            table[i] = NULL;
        }

        curr_size = 0;

        // shift all elements from old table to new table

        for(int i = 0; i <oldTableSize;i++){
            Node<T>* temp = oldTable[i];
            while(temp != NULL){
                insert(temp->key,temp->value);
                temp = temp->next;
            }

               if(oldTable[i] != NULL){
            delete oldTable[i];
        }
        }

     

        delete[] oldTable;

    }

    public : 

    Hashtable(int ts = 7){
        table_size = ts;
        table = new Node<T>*[table_size];
        curr_size = 0;
        for(int i =0; i < table_size; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, T value){
        int idx = hashFn(key);

        Node<T> *n = new Node<T>(key,value);
        // insetion at the head of the linked list with id = idx

        n->next = table[idx];
        table[idx] = n;
        curr_size++;

        //rehash

        float load_factor = curr_size/(1.0*table_size);

        if(load_factor > 0.7){
            rehash();
        }
    }

    T* search(string key){
         
         int idx = hashFn(key);
          Node<T>*temp = table[idx];
        for(int i=0; i<table_size; i++){
            while(temp != NULL){
                if(temp->key == key){
                    return &temp->value;
                }
                temp = temp->next;
            }
        }

        return NULL;
    }

    T& operator[](string key){
        T* f = search(key);

        if(f == NULL){
            T garbage;
            insert(key, garbage);
            f = search(key);
        }

        return *f;
    }

    void print(){
        for(int i = 0 ; i < table_size; i++){
            cout<<"Bucket "<<i<<" ->";
            Node<T>*temp = table[i];
            while(temp!= NULL){
                cout<<temp->key<<" "<<temp->value<<", ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

}; 

int main(){

    Hashtable<int> price_menu;

    price_menu.insert("Burger",120);
    price_menu.insert("Pepsi",20);
    price_menu.insert("BurgerPizza",150);
    price_menu.insert("Noodles",30);
    price_menu.insert("Coke",40);

    price_menu.print();

    int *price = price_menu.search("Burger");

    if(price == NULL){
        cout<<"Not Found!";
    }
    else{
        cout<<"price is "<<*price<<endl;
    }

    price_menu["Dosa"] = 60;

    price_menu["Dosa"] += 10;

   cout<<price_menu["Dosa"]<<endl;

}