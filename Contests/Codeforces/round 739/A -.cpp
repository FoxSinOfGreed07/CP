#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    int a = 0;
    for(int i=1; i<4*n; i++){
    	if(i % 3 != 0 and i%10 != 3){
    		a++;
			if(a==n){
				cout<<i<<endl;
			}
    	}
    }
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