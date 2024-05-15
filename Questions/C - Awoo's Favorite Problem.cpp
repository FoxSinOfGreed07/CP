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
    string a, b;
    cin>>a>>b;
    vector<long long int> A(3, 0), B(3, 0), count(3, 0);
    for(int i=0; i<n; i++){
        if(a[i] == 'a'){
        	A[0] += i;
        	count[0]++;
        } else if(a[i] == 'b'){
        	A[1] += i;
        	count[1]++;
        } else{
        	A[2] += i;
        	count[2]++;
        }
        if(b[i] == 'a'){
        	B[0] += i;
        	count[0]--;
        } else if(b[i] == 'b'){
        	B[1] += i;
        	count[1]--;
        } else{
        	B[2] += i;
        	count[2]--;
        }
    }
    if(count[0] != 0 or count[1] != 0 or count[2] != 0){
    	cout<<"NO"<<endl;
    	return;
    }
    if(A[0] > B[0]){
    	cout<<"NO"<<endl;
    	return;
    }
    if(A[2] < B[2]){
    	cout<<"NO"<<endl;
    	return;
    }
    int aChange = B[0] - A[0], bChange = B[1] - A[1], cChange = A[2] - B[2];
    if(!aChange){
    	if(bChange < 0){
    		cout<<"NO"<<endl;
			return;
    	}
    }
    if(!cChange){
    	if(bChange > 0){
    		cout<<"NO"<<endl;
			return;
    	}
    }
    if(!bChange){
    	bool flag = false;
    	for(int i=0; i<n; i++){
    		if(a[i] != b[i] and (a[i] == 'b' or b[i] == 'b')){
    			flag = true;
    			break;
    		}
    	}
    	if(flag){
    		if(a != b){
    			cout<<"NO"<<endl;
				return;
    		}
    	}
    }
    if(abs(bChange) != abs(aChange - cChange)){
    	cout<<"NO"<<endl;
		return;
    }
    cout<<"YES"<<endl;
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