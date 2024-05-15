#include <bits/stdc++.h>
using namespace std;

#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> seg(n, vector<int> (3, 0));
    for(int i=0; i<n; i++){
        cin>>seg[i][0]>>seg[i][1]>>seg[i][2];
    }
    pair<int, int> Lmost(seg[0][0], 0), Rmost(seg[0][1], 0);
    int cost = seg[0][2];
    cout<<cost<<"\n";
    for(int i=1; i<n; i++){
    	if(seg[i][0] <= Lmost.first){
    		if(seg[i][1] >= Rmost.first){
    			cost = seg[i][2];
    			cout<<cost<<"\n";
    			continue;
    		} else{

    		}
    	}
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