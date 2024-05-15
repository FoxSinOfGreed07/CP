#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

void solve() {
    int n, k, temp = 0;
    cin>>n>>k;
    if(n&1){
    	if(k > (n+1)/2){
    		cout<<-1<<endl;
    		return;
    	}
    } else{
    	if(k > n/2){
    		cout<<-1<<endl;
    		return;
    	}
    }
    string ans = "";
    char ch = 'a';
    while(k != 0){
    	ans += ch;
    	ch++;
    	k--;
    }
    ch--;
    if(n&1){
    	while(ans.size() < (n+1)/2){
    		ans += ch;
    	}
    	n = ans.length();
    	for(int i = n-2; i >= 0; i--){
    		ans += ans[i];
    	}
    } else{
    	while(ans.size() < n/2){
    		ans += ch;
    	}
    	n = ans.length();
    	for(int i = n-1; i >= 0; i--){
    		ans += ans[i];
    	}
    }
    cout<<ans<<endl;
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