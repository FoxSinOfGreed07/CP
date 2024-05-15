#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

void solve() {
    int n, sum1 = 0, sum2, mx = 0;
    cin>>n>>sum2;
    vector<int> nums(n);
    map<int, bool> m;
    bool repeatCheck = false;

    for(int i=0; i<n; i++){
        cin>>nums[i];
        sum1 += nums[i];
        if(mx < nums[i]) mx = nums[i];
        if(m.find(nums[i]) == m.end()){
        	m[nums[i]] = true;
        } else{
        	repeatCheck = true;
        }
    }
    if(repeatCheck){
    	cout<<"NO\n";
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