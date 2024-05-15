#include <bits/stdc++.h>
using namespace std;

#define int long long int

void FoxSinOfGreedio();

template <typename T>
class Graph{
    int V;
    unordered_map< T, vector< pair< T, int > > > g;

    void addEdge(T v1, T v2, int dist, bool bd){
        g[v1].push_back({v2, dist});
        if(bd){
            g[v2].push_back({v1, dist});
        }
    }

    public:
    Graph(int V){
        this->V = V;
    }

    void createGraph(){
        T v1, v2;
        int d;
        bool bd;
        // cout<<"Enter the "<<V<<" edges, distances and Bi-Directional Nature:"<<endl;
        for(int i=0;i<V;i++){
            cin>>v1>>v2>>d>>bd;
            // cout<<v1<<" "<<v2<<" "<<d<<" "<<bd<<endl;
            addEdge(v1, v2, d, bd);
        }
    }

    void printHmap(){
        cout<<endl;
        for(auto i:g){
            cout<<i.first<<": ";
            for(auto j:i.second){
                cout<<j.first<<" ~ "<<j.second;
                cout<<", ";
            }
            cout<<endl;
        }
    }

};

void solve()
{
    int v;
    cin>>v;
    Graph<string> g(v);
    g.createGraph();
    g.printHmap();
}

signed main()
{
    FoxSinOfGreedio();
    int T = 1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
}

void FoxSinOfGreedio()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}