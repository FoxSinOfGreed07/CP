#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

void solve() {
    string s, tar = "Yes";
    cin>>s;
    int n = s.length();
    if(s[0] == 'Y'){
    	for(int i=1; i<n; i++){
    		if(s[i] != tar[i%3]){
    			cout<<"NO\n";
    			return;
    		}
    	}
	} else if(s[0] == 'e'){
		for(int i=1; i<n; i++){
    		if(s[i] != tar[(i+1)%3]){
    			cout<<"NO\n";
    			return;
    		}
    	}
	} else if(s[0] == 's'){
    	for(int i=1; i<n; i++){
    		if(s[i] != tar[(i+2)%3]){
    			cout<<"NO\n";
    			return;
    		}
    	}	
	} else{
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	return;
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