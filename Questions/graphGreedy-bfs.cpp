#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
	unordered_map< int, vector< int > > g;
	queue<int> q;
	int a, b;
	cin >> a >> b;
	vector<int> v;
	for(int i=0; i<a; i++){
		g[i] = v;
	}
	for (int i = 0; i < b; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		g[n1].push_back(n2);
	}
	int immediate_neighbours = 0;
	for (int i : g[1]) {
		q.push(i);
		immediate_neighbours += g[i].size();
	}
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		if(immediate_neighbours){
			for(auto i:g[node]){
				if(i==a){
					cout<<"YES"<<endl;
					return;
				}
				q.push(i);
				immediate_neighbours--;
			}
		}
	}
	cout<<"NO"<<endl;
}

signed main()
{
	FoxSinOfGreedio();
	int T = 1;
	// cin>>T;
	while (T--)
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