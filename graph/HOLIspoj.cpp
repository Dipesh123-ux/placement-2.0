#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    list<pair<int, int>> *l;    

    public:
    Graph(int v){
        this.v = v;
        l = new list<pair<int, int>> [v];

    }

    void addEdge(int x , int y , int cost){
        l[x].push_back(make_pair(y,cost));
        l[y].push_back(make_pair(x,cost));
    }
}

int main(){

}