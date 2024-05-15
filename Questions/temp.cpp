#include <bits/stdc++.h>
using namespace std;

#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define nl "\n"

int temp(int &number){
	number++;
    cout<<floor(number/2)<<endl;
	return number;
}

void solve() {
  map<int, int> m1, m2;
  m1[1] = 4;
  m2[4] = 5;
  if(m1[4] < m2[4]){
    cout<<"NO";
  }
  cout<<"YES";
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

