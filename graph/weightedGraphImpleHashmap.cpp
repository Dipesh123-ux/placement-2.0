#include<bits/stdc++.h>
using namespace std;

class Graph{
    //adj list
    unordered_map<string,list<pair<string,int> > > l;

    public :

    void addEdge(string x, string y , bool bidir,int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidir){
        l[y].push_back(make_pair(x,wt));
        }
    }

    void printList(){
        for(auto p : l){

            string city = p.first;
            list<pair<string,int>> nbrs = p.second;

            cout<<city<<" -> ";

            for(auto nbr : nbrs){
                string des = nbr.first;
                int dist = nbr.second;
                cout<<des<<"  "<<dist<<", ";
            }
 
            cout<<endl;

        }
    }
};

int main(){
 
    Graph g;
    g.addEdge("Balaghat","Gondia",true,45);
    g.addEdge("Balaghat","Waraseoni",true,15);
    g.addEdge("Gondia","Nagpur",true,105);
    g.addEdge("Balaghat","Nagpur",true,150);
    g.addEdge("Waraseoni","Nagpur",false,165);

    g.printList();
   
    
}