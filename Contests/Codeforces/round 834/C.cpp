#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

void solve() {
    int l, r, jumpMin, init, fin;
    cin>>l>>r>>jumpMin;
    cin>>init>>fin;
    if(init == fin){
    	cout<<0<<endl;
    	return;
    }
    if(init > fin) swap(init, fin);
    int diff = fin - init;
    if(diff >= jumpMin){
    	cout<<1<<endl;
    	return;
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