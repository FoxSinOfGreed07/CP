#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

class Graph{
	int V;
	map<int, list<pair<int, int > > > adjList;
	map<int, int> distMap;
	set<pair<int, int> > distSet;
public:
	Graph(int v){
		this->V = v;
		for(int i=0; i<v; i++){
			distSet.insert({INT_MAX, i});
			distMap[i] = INT_MAX;
		}
	}

	void addEdge(int v1, int v2, int w8){
		adjList[v1].push_back(make_pair(v2, w8));
	}

	void createGraph(){
		int a, b, w;
		while(true){
			cin>>a>>b>>w;
			if(a != -1 and b != -1 and w != -1){
				addEdge(a, b, w);
			} else{
				break;
			}
		}
	}

	void dijkSSSP(int src){
		distSet.erase({INT_MAX, src});
		distSet.insert({0, src});
		distMap[src] = 0;

		while(!distSet.empty()){
			auto closestNode = *distSet.begin();
			int node = closestNode.second;
			int nodeDist = closestNode.first;
			distSet.erase(distSet.begin());

			for(auto nbr:adjList[node]){
				if(nodeDist + nbr.second < distMap[nbr.first]){	
					distSet.erase({distMap[nbr.first], nbr.first});
					distSet.insert({nodeDist + nbr.second, nbr.first});

					distMap[nbr.first] = nodeDist + nbr.second;
				}
			}
		}
	}

	void printSSSP(){
		cout<<"node         distance"<<endl;
		for(auto i:distMap){
			cout<<" "<<i.first<<"               "<<i.second<<endl;
		}
	}
};

void solve()
{
    int n;
    cin>>n;
    Graph g(n);
    g.createGraph();
    g.dijkSSSP(0);
    g.printSSSP();
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