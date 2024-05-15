#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

class Graph{
	vector<pair<int, int>> *l;
	int V;
public:
	Graph(int v){
		this->V = v;
		l = new vector<pair<int, int>>[v];
	}

	void addEdge(int v1, int v2, int w8){
		l[v1].push_back(make_pair(v2, w8));
		l[v2].push_back(make_pair(v1, w8));
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

	int primsMST(){
		// This priority queue (min) gives the edge with min weight from vertices that have already
		// been added to the MST
		priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > Q;

		// This visited array makes sure that edges to visited nodes are rejected (avoids cycle)
		bool* visited = new bool[V]{0};

		// This is the weight of the MST. It will be updated as we add edges.
		int MST_weight = 0;
		// Adding the first node to the PQ. of the form {weight, nextVertex}
		Q.push(make_pair(0, 0));

		// While there are edges to choose from: 
		while(!Q.empty()){
			// Top of the pq gives min weight edge, that is the best option
			auto best = Q.top();

			// Once the edge is under consideration, it is removed from the pq
			Q.pop();

			int nextNode = best.second;
			int weight = best.first;

			// If the edge with min weight is to a vertex that has already been visited, it is
			// rejected and the loop continues from the top, with another edge in the pq. 
			if(visited[nextNode]){
				continue;
			}
			// If the edge was not rejected, the weight of the mst is updated and the target vertex
			// is marked visited.
			cout<<"target edge: "<<nextNode<<" weight: "<<weight<<endl;
			MST_weight += weight;
			visited[nextNode] = 1;

			// Since we have a new vertex that can be used to continue the tree, the edges from that
			// vertex leading to non visited vertices are added to the pq.
			for(auto i:l[nextNode]){
				if(!visited[i.first]){
					Q.push(make_pair(i.second, i.first));
				}
			}
		}
		// The mst has been made and the weight is returned
		return(MST_weight);
	}
};

void solve()
{
    int n;
    cin>>n;
    Graph g(n);
    g.createGraph();
    cout<<g.primsMST();    
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