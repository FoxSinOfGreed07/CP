#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

void solve() {
    int n;
    cin>>n;
    map<int, char> m;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    string s;
    cin>>s;
    for(int i=0; i<n; ++i){
    	if(m.find(v[i]) == m.end()){
    		m[v[i]] = s[i];
    	} else{
    		if(m[v[i]] != s[i]){
    			cout<<"NO\n";
    			return;
    		}
    	}
    }
    cout<<"YES\n";
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