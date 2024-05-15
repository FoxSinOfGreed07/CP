#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void solve() {
    int x,y;
    double dist;
    cin>>x>>y;
    if(x == 0 and y == 0){
    	cout<<0<<endl;
    	return;
    }
    dist = sqrt(x*x + y*y);
    if(floor(dist) == ceil(dist)){
    	cout<<1<<endl;
    } else{
    	cout<<2<<endl;
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