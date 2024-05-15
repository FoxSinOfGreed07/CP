#include <bits/stdc++.h>
using namespace std;
// A True Sin Is Something 
// You Can Never Atone For.
#define FoxSinOfGreed ios::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define endl "\n"

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve() {
    int n;
    cin>>n;
    if(n == 2){
    	cout<<1<<endl;
    	return;
    }
    int ans = 0;
    if(n&1){
    	int a = n/2, b = n/2 + 1;
    	while(a > 1){
    		if(gcd(a, b) + lcm(a--, b++) == n){
    			ans++;
    		}
    	}
    	ans++;
    	ans *= 2;
    } else{
    	int a = n/2 - 1, b = n/2 + 1;
    	while(a > 1){
    		if(gcd(a, b) + lcm(a--, b++) == n){
    			ans++;
    		}
    	}
	    ans++;
	    ans *= 2;
	    ans++;	  	
    }
    cout<<n<<" - "<<ans<<endl;
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