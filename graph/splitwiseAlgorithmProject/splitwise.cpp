#include<bits/stdc++.h>
using namespace std;

class person_compare{
    public:
    bool operator()(pair<string,int> a,pair<string,int> b){
        return a.second < b.second;
    }
};

int main(){

    int no_of_transactions;

    cout<<"Enter the number of transactions made between them :";
    cin>>no_of_transactions;

    string x , y;
    int amount;

   

    map<string,int> net;

    while(no_of_transactions--){
         
        cout<<"Enter the name of two persons :"<<endl;
        cin>>x>>y;
        cout<<"Enter the amount "<<x<<" has to give to "<<y<<endl;
        cin>>amount;
        if(net.count(x)==0){
            net[x] = 0;
        }
        if(net.count(y)==0){
            net[y] = 0;
        }
        net[x] -= amount;
        net[y] += amount;
    }

    multiset<pair<string,int>, person_compare > m;

 
      for(auto p : net){
          string person = p.first;
          int amount = p.second;
          if(net[person] != 0){
              m.insert(make_pair(person, amount));
          }
      }

      // pop out two persons try to settle them 

      int count = 0;
      while(!m.empty()){

          auto l = m.begin();
          auto r = prev(m.end());

          int debit = l->second;
          string debit_person = l->first;

          int credit = r->second;
          string credit_person = r->first;

          // erase from map

          m.erase(l);
          m.erase(r);

          int settlemet_Amount =  min(abs(debit), credit);
          count++;
          

          debit += settlemet_Amount;

          credit -= settlemet_Amount;

          cout<<debit_person<<" will pay "<<settlemet_Amount<<" to "<<credit_person<<endl;

          if(debit != 0){
              m.insert(make_pair(debit_person,debit));
          }
          if(credit != 0){
              m.insert(make_pair(credit_person,credit));
          }

      }

cout<<count<<endl;


}