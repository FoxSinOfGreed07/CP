#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

bool comparator(vector<int> v1, vector<int> v2 ){
	return(v1[2]<v2[2]);
}

class Graph{
	int V;
	vector<vector<int>> edgeList;
	vector<int> parent;
public:
	Graph(int v){
		this->V = v;
		for(int i=0; i<v; i++){
			parent.push_back(-1);
		}
	}

	void create(){
		while(true){
			vector<int> edge(3);
			cin>>edge[0]>>edge[1]>>edge[2];
			if(edge[0] != -1 and edge[1] != -1){
				edgeList.push_back(edge);
			} else{
				sort(edgeList.begin(), edgeList.end(), comparator);
				break;
			}
		}
	}

	int DSU_find(int a){
		if(parent[a] == -1){
			return(a);
		} else{
			return(parent[a] = DSU_find(parent[a]));
		}
	}

	void DSU_union(int a, int b){
		int root_a = DSU_find(a);
		int root_b = DSU_find(b);
		if(root_a != root_b){
			parent[root_b] = root_a;
		}
	}

	void mst(){
		int mst_weight = 0;
		for(auto i:edgeList){
			if(DSU_find(i[0]) != DSU_find(i[1])){
				mst_weight += i[2];
				cout<<i[0]<<" "<<i[1]<<endl;
				DSU_union(i[0], i[1]);
			}
		}
		cout<<"weight: "<<mst_weight;
	}

	void getEdgeList(){
		for(auto i:edgeList){
			cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
		}
	}
};

void solve()
{
    int n;
    cin>>n;
    Graph g(n);
    g.create();
    g.mst();
    // cout<<"\n---------------\n";
    // g.getEdgeList();
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