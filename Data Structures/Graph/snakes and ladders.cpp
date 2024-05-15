#include <bits/stdc++.h>
using namespace std;

#define int long long int

void FoxSinOfGreedio();

template <typename T>
class Graph{
    int V;
    unordered_map< T, vector< pair< T, int > > > g;

    public:
    void addEdge(T v1, T v2, int dist, bool bd){
        g[v1].push_back({v2, dist});
        if(bd){
            g[v2].push_back({v1, dist});
        }
    }

    Graph(int V){
        this->V = V;
    }

    void createGraph(){
        T v1, v2;
        int d;
        bool bd;
        for(int i=0;i<V;i++){
            cin>>v1>>v2>>d>>bd;
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

    void bfs(T src){
        queue<T> q;
        map<T, bool> visited;

        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            T node = q.front();
            cout<<node<<" ";
            q.pop();

            // nbr -> neighbour
            for(auto nbr: g[node]){
                if(!visited[nbr.first]){
                    q.push(nbr.first);
                    visited[nbr.first] = true;
                }
            }
        }
    }

    int shortestPath(T src, T dest){
        queue<T> q;
        map<T, int> dist;

        for(auto node_pair: g){
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }

        q.push(src);
        dist[src] = 0;

        while(!q.empty()){
            T node = q.front();
            q.pop();

            // nbr -> neighbour
            for(auto nbr: g[node]){
                if(dist[nbr.first] == INT_MAX){
                    q.push(nbr.first);
                    dist[nbr.first] = dist[node] + 1;
                }
            }
        }
        return(dist[dest]);
    }

};

void solve()
{
    int v;
    cin>>v;
    // Hard Coded the Board array, can take inputs instead :)
    int board[v] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;

    Graph<int> g(v);
    // 6*6 board with 36 squares
    for(int i=1; i <= 36; i++){
        for(int dice = 1; dice <= 6; dice++){
            int j = i + dice;
            j += board[j];
            if(j <= 36){
                g.addEdge(i, j, 1, false);
            }
        }
    }   
    g.addEdge(36, 36, 1, false);
    // g.bfs(0);
    cout<<g.shortestPath(0, 36);

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