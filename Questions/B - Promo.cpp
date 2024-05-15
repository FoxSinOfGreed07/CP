#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void solve() {
    int n, q;
    cin>>n>>q;
    vector<long long int> v(n), presum(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end(), greater<long long int>());
    presum[0] = v[0];
    for(int i=1; i<n; i++){
    	presum[i] = v[i] + presum[i-1];
    }
    int x, y;
    while(q--){
    	cin>>x>>y;
    	if(x==y){
    		cout<<presum[x-1]<<endl;
    	} else{
    		cout<<presum[x-1] - presum[x-y-1]<<endl;
    	}
    }
    // 1 2 3 5 5
    // 5 10 13 15 16
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FoxSinOfGreed;
    int T = 1;
    //cin>>T;
    while(T--) {
        solve();
    }
}