#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define endl "\n"

void solve() {
    int n, m, k;
    string a, b;
    cin>>n>>m>>k;
    bool flag = false;
    int limA = k, limB = k, prev = -1;
    cin>>a;
    cin>>b;
    vector<char> A(n), B(m), C;
    for(int i=0; i<n; i++){
    	A[i] = a[i];
    }
    for(int i=0; i<m; i++){
    	B[i] = b[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    string c = "";
    int i=0, j=0;
    while(i < n and j < m){
    	if(limA){
    		if(A[i] < B[j] or (A[i] == B[j] and (n-i) <= (m-j)) or !limB){
    			if(prev){
    				limB = k;
    			}
    			c += A[i];
    			i++;
    			limA--;
    			prev = 0;
    			flag = true;
    		}
    	}
    	if(limB and !flag){
    		if(A[i] > B[j] or (A[i] == B[j] and (n-i) > (m-j)) or !limA){
    			if(!prev){
    				limA = k;
    			}
    			c += B[j];
    			j++;
    			limB--;
    			prev = 1;
    		}
    	}
    	flag = false;	
    }
    cout<<c<<endl;
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