#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

class Graph{
    int V;
    unordered_map< int, vector< pair< int, int > > > g;
    map<int, bool> visitedDFS;
    list<int> topoList;
    vector<int> indegree();

    void addEdge(int v1, int v2, int dist, bool bd){
        g[v1].push_back({v2, dist});
        indegree[v2]++;
        if(bd){
            g[v2].push_back({v1, dist});
            indegree[v1]++;
        }
    }

    public:
    Graph(int V){
        this->V = V;
        vector<pair<int, int>> v;
        v.clear();
        for(int i=0; i<V; i++){
        	g[i] = v;
        	visitedDFS[i] = false;
        	indegree[i] = 0;
        }
        // cout<<"created"<<endl;
    }

    void createGraph(){
        int v1, v2;
        int d;
        bool bd;
        // cout<<"Enter the "<<V<<" edges, distances and Bi-Directional Nature:"<<endl;
        while(true){
            cin>>v1>>v2>>d>>bd;
            if(v1 == -1 and v2 == -1){
            	break;
            }
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

    void bfs(int src){
        queue<int> q;
        map<int, bool> visited;

        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int node = q.front();
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

    void dfs(int src){
    	visitedDFS[src] = true;
    	// cout<<src<<" <-"<<endl;
    	for(auto i : g[src]){
    		if(!visitedDFS[i.first]){
    			dfs(i.first);
    		}
    	}
    	topoList.push_front(src);
    }

    void conCom(int src){
    	dfs(src);
    	cout<<endl;
    	for(auto i : visitedDFS){
    		if(!i.second){
    			dfs(i.first);
    			cout<<endl;
    		}
    	}
    }    

    void topoSortDFS(){
    	for(auto i : g){
    		if(!visitedDFS[i.first]){
    			dfs(i.first);
    		}
    	}
    	for(auto i : topoList){
    		cout<<i<<" ";
    	}
    }

    void topoSortInDegree(){
    	queue<int> q;
    	for(auto i : indegree){
    		if(i.second == 0){
    			q.push(i.first);
    		}
    	}
    	while(!q.empty()){
			int node = q.front();
			q.pop();
			cout<<node<<" ";
			for(auto nbr : g[node]){
				indegree[nbr.first]--;
				if(indegree[nbr.first] == 0){
					q.push(nbr.first);
				}
			}
		}
    }
};


void solve()
{
	int v;
	cin>>v;
    Graph g(v);
    g.createGraph();
    g.topoSortInDegree();
    // g.printHmap();
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