#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

class Graph{
	int V;
	vector< pair<int, int> > edgeList;
	vector<int> parentList;
public:
	Graph(int Vertices){
		this->V = Vertices;
		for(int i=0; i<Vertices; i++){
			parentList.push_back(-1);
		}
	}

	void createGraph(){
		while(true){
			pair<int, int> edge;
			cin>>edge.first>>edge.second;
			if(edge.first != -1 and edge.second != -1){
				edgeList.push_back(edge);
				if(DSU_find(edge.first) == DSU_find(edge.second) and DSU_find(edge.first) != -1){
					cout<<"Cycle present"<<endl;
					return;
				}
				parentList[edge.second] = edge.first;
			} else{
				cout<<"Cycle is NOT present"<<endl;
				break;
			}
		}
	}

	int DSU_find(int a){
		if(parentList[a] == -1){
			return(a);
		} else{
			//adding path compression, changing return(DSU_find(parentList[a])); -> return 
			//parentList[a] = DSU_find(parentList(a));
			return(parentList[a] = DSU_find(parentList[a]));
		}
	}

	void DSU_union(int a, int b){
		int root_a = DSU_find(a);
		int root_b = DSU_find(b);
		if(root_a != root_b){
			parentList[root_b] = root_a;
		}
	}

	void showParents(){
		for(int i=0; i<V; i++){
	    	cout<<"Parent of "<<i<<" is: "<<parentList[i]<<endl;
	    }
	}

};

void solve()
{
    int n;
    cin>>n;
    Graph G(n);
    G.createGraph();
    G.showParents();
    // cout<<G.DSU_find(3)<<endl;
    // G.DSU_union(1, 3);
    // cout<<G.DSU_find(3)<<endl;
    // G.showParents();
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