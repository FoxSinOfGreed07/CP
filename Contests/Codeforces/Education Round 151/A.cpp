#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
// 👉👈
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

void printInt(vector<int> &v){
	for(int i = 0; i < v.size() - 1; ++i){
		cout<<v[i]<<" ";
	}
	cout<<v[v.size() - 1];
}

void solve() {
    int t;
    cin>>t;
    for(int i=0; i<t; ++i){
        int n, k, x;
        vector<int> ans;
        cin>>n>>k>>x;
        if(x != 1){
        	cout<<"YES\n";
        	for(int j = 0; j < n; j++){
        		ans.push_back(1);
        	}
        	printInt(ans);
        	ans.clear();
        	continue;
        }
        if(k == 1){
        	cout<<"NO\n";
        	continue;
        }
        if(k >= 2){
        	if(!(n % 2)){
	        	cout<<"YES\n";
	        	while(n){
	        		ans.push_back(2);
	        		n -= 2;
	        	}
	        	printInt(ans);
	        	ans.clear();
	        	continue;
        	} else{
        		if(k == 2){
        			cout<<"NO\n";
        			continue;
        		} else{
        			cout<<"YES\n";
        			if(n > 2){
        				while(n != 3){
        					cout<<"2 ";
        					n -= 2;
        				}
        				cout<<3<<"\n";
        				continue;
        			}
        		}
        	}
        }
    }
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