#include<bits/stdc++.h>
using namespace std;


template<typename T>
class Graph{
    unordered_map<T , list<pair<T,int> > > l;

    public:

    void addEdge(T u , T v, int dist , bool birdir = true){
        l[u].push_back(make_pair(v, dist));
        if( birdir){
           l[v].push_back(make_pair(u, dist)); 
        }
    }

    void printList(){
        for(auto j : l){
            cout<<j.first<<" --> ";
            for(auto i : j.second){
                cout<<"("<<i.first<<", "<<i.second<<") ";
            }
            cout<<endl;
        }
    }

    void dijsktraSSSP(T src){
        set<pair<int , T> > s;
        unordered_map<T,int> dist;

        for(auto x : l){
            T node = x.first;
            dist[node] = INT_MAX;
        }
        s.insert(make_pair(0,src)); 
        dist[src] = 0;

        while(!s.empty()){
            auto p = *(s.begin());
            T node = p.second;

            int nodeDis = p.first;

            s.erase(s.begin());

            for(auto nbr  : l[node]){
                if(nodeDis + nbr.second < dist[nbr.first]){

                    T destination = nbr.first;
                    auto f = s.find(make_pair(dist[destination],destination));
                    if(f != s.end()){
                        s.erase(f);
                    }

                    dist[destination] = nodeDis + nbr.second;
                    s.insert(make_pair(dist[destination],destination));
                }
            }

   }

            for(auto d : dist){
                T des = d.first;
                int dist = d.second;

                cout<<"Shortest distance of "<<des<<" from "<<src<<" is "<<dist<<endl;

            }


        }





    };



int main(){

    Graph<string> g;

    g.addEdge("Amritsar","Delhi",1);
    g.addEdge("Amritsar","Jaipur",4);
    g.addEdge("Jaipur","Delhi",2);
    g.addEdge("Delhi","Agra",1);
    g.addEdge("Jaipur","Mumbai",8);
    g.addEdge("Mumbai","Bhopal",3);
    g.addEdge("Bhopal","Agra",2);

    g.dijsktraSSSP("Amritsar");

}