#include <bits/stdc++.h>
using namespace std;

#define int long long int

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    int a, b, x, y;
    int Max = 0;
    for(int i=0;i<n;i++){
    	cin>>x>>y;
    	if((x + y) > Max){
    		a = x;
    		b = y;
    		Max = (a + b);
    	}
    }
    cout<<(a + b);
}

signed main()
{
    FoxSinOfGreedio();
    int T = 1;
    //cin>>T;
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