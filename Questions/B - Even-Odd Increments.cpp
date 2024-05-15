#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

void solve() {
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    int sum = 0, numE = 0, numO = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
        if(v[i]&1){
        	numO++;
        } else{
        	numE++;
        }
    }
    int type, inc;
    for(int i=0; i<q; ++i){
    	cin>>type>>inc;
    	if(!type){
    		sum += inc*numE;
    		if(inc&1){
    			numO += numE;
    			numE = 0;
    		}
    	} else{
    		sum += inc*numO;
    		if(inc&1){
    			numE += numO;
    			numO = 0;
    		}
    	}
    	cout<<sum<<endl;
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