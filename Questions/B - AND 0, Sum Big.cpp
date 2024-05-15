#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

// ( (a % m) * (b % m) ) % m

int returnMod(int n, int k, int m){
	// gotta return (n^k)%m
	if(k == 1){
		return(n % m);
	}
	if(k % 2 == 1){
		int res = returnMod(n, k/2, m) * returnMod(n, (k/2) + 1, m);
		return( res % m );
	} else{
		int res = returnMod(n, k/2, m) * returnMod(n, k/2, m);
		return( res % m );
	}
}

void solve()
{
    int n, k, mod = 1000000007;
    cin>>n>>k;
    int res = n;
    cout<<returnMod(n, k, mod)<<endl;
}

signed main()
{
    FoxSinOfGreedio();
    int T = 1;
    cin>>T;
    while(T--)
    {
        solve();
    }
}

void FoxSinOfGreedio()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}