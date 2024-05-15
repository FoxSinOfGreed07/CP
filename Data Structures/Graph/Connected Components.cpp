#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

template <typename T>
class Graph{
    int V;
    unordered_map< T, vector< pair< T, int > > > g;
    map<T, bool> visitedDFS;

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
        while(true){
            cin>>v1>>v2>>d>>bd;
            if(v1 == -1){
            	break;
            }
            visitedDFS[v1] = false;
            visitedDFS[v2] = false;
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

    void conCom(T src){
    	dfs(src);
    	cout<<endl;
    	for(auto i : visitedDFS){
    		if(!i.second){
    			dfs(i.first);
    			cout<<endl;
    		}
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

    void dfs(T src){
    	visitedDFS[src] = true;
    	cout<<src<<" ";
    	for(auto i : g[src]){
    		if(!visitedDFS[i.first]){
    			dfs(i.first);
    		}
    	}
    }
};

void solve()
{
    Graph<int> g(10);
    g.createGraph();
    // g.printHmap();
    g.conCom(1);
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