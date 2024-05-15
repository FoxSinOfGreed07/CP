#include <bits/stdc++.h>
using namespace std;

#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void solve() {
    int n, k;
    cin>>n>>k;
    if(k > (n+1)/2){
    	cout<<-1<<endl;
    	return;
    }
    vector<vector<char>> grid(n, vector<char> (n, '.'));

    for(int i=0; i<n; i+=2){
    	if(k==0){
    		break;
    	}
        grid[i][i] = 'R';
        k--;
    }
    
    for(auto i: grid){
    	for(auto j:i){
    		cout<<j;
    	}
    	cout<<endl;
    }
}

signed main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    FoxSinOfGreed;
    int T = 1;
    cin>>T;
    while(T--) {
        solve();
    }
}