#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

class Graph{
    int V;
    vector<vector<int>> edgeList;
    vector<int> dist;
public:
    Graph(int v){
        this->V = v;
        for(int i=0; i<v; i++){
            dist.push_back(INT_MAX);
        }
    }

    void create(){
        while(true){
            vector<int> edge(3);
            cin>>edge[0]>>edge[1]>>edge[2];
            if(edge[0] != -1 and edge[1] != -1){
                edgeList.push_back(edge);
            } else{
                break;
            }
        }
    }

    void getEdgeList(){
        for(auto i:edgeList){
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
    }

    void BellmanFord(int src){
        dist[src] = 0;
        for(int i=0; i<edgeList.size()-1; i++){
            for(auto edge:edgeList){
                if(dist[edge[0]] != INT_MAX and dist[edge[0]] + edge[2] < dist[edge[1]]){
                    dist[edge[1]] = dist[edge[0]] + edge[2];
                }
            }
        }
    }

    void getBFsssp(){
        for(int i=0; i<V; i++){
            cout<<i<<" "<<dist[i]<<endl;
        }
    }
};

void solve()
{
    int n;
    cin>>n;
    Graph g(n);
    g.create();
    g.BellmanFord(0);
    g.getBFsssp();
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