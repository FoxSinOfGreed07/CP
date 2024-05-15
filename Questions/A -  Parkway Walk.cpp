#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void solve() {
    int n, m, total = 0;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        total += v[i];
    }
    if(total <= m){
    	cout<<0<<endl;
    } else{
    	cout<<total - m<<endl;
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FoxSinOfGreed;
    int T = 1;
    cin>>T;
    while(T--) {
        solve();
    }
}	