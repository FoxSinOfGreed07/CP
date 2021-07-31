#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    //array of lists
    list<int>* l;

    void addEdge(int v1, int v2){
        l[v1].push_back(v2);
        l[v2].push_back(v1);
    }

    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void createGraph(){
        int v1, v2;
        cout<<"Enter the "<<V<<" edges:"<<endl;
        for(int i=0;i<this->V;i++){
            cin>>v1>>v2;
            addEdge(v1, v2);
        }
    }

    void printAdjList(){
        cout<<endl;
        for(int i=0;i<V;i++){
            cout<<i<<" : ";
            for(int nbr: l[i]){
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){
    int v;
    cin>>v;
    Graph g(v);
    g.createGraph();
    g.printAdjList();

}