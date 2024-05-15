#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

vector<vector<int>> allPoss(vector<int> candy){
	vector<vector<int>> poss;
	for(int i = 0; i<candy.size(); i++){
		for(int j=1; j<=candy[i]; j++){
			candy[i] -= j;
			poss.push_back(candy);
			candy[i] += j;
		}
	}
}

bool solve(bool chance, vector<int> candy) {
	bool hasLost = true;
	for(int i = 0; i<candy.size(); i++){
		if(candy[i] > 0){
			hasLost = false;
			break;
		}
	}
    
    if(chance){
    	if(hasLost) return false;
    	return (false or solve(!chance, candy));
    } else{
    	if(hasLost) return true;
    }





}

signed main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    FoxSinOfGreed;
    int T = 1;
    //cin>>T;
    while(T--) {
        solve();
    }
}