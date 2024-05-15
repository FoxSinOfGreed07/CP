#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void solve() {
    int n, cake;
    cin>>n;
    vector<int> cakes;
    for(int i=0; i<n; i++){
    	cin>>cake;
    	cakes.push_back(cake);
    }
    
    int largest = INT_MIN, secLargest = INT_MIN;

    for(int i=0; i<n; i++){
    	if(largest <= cakes[i]){
    		secLargest = largest;
    		largest = cakes[i];
    	} else if(secLargest < cakes[i]){
    		secLargest = cakes[i];
    	}
    }
    cout<<largest+secLargest<<endl;
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