#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

void solve() {
    int n,k;
    cin>>n>>k;
    if(k&1){
    	cout<<"YES\n";
    	for(int i=1; i<n; i+=2){
    		cout<<i<<" "<<i+1<<endl;
    	}
    } else{
    	if(!((k+2)%4)){
    		cout<<"YES\n";
    		for(int i=1; i<n; i+=2){
    			if((i+1)%4) cout<<i+1<<" "<<i<<endl;
    			else cout<<i<<" "<<i+1<<endl;
    		}
    	} else cout<<"NO\n";
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