#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    set<int> s;
    for(int i=0; i<n; i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    if(n==1){
    	cout<<"-1"<<endl;
    	return;
    }
    int t = v[n-1];
    int j = 0;
    auto i = s.begin();
    while(i != s.end()){
    	if(v[j] != *i){
    		v[j] = *i;
    		s.erase(*i);
    		j++;
    		i = s.begin();
    	} else{
    		i++;
    		if(s.size() == 1){
    			break;
    		}
    	}
    	// cout<<*i;
    }
    if(v[n-1] == t){
    	swap(v[n-2], v[n-1]);
    }
    for(int i=0; i<n; i++){
    	cout<<v[i]<<" ";
    }
    cout<<endl;
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