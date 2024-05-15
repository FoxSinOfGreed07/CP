#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    vector<int> v(n), c(n);
    for(int i=0; i<n; i++){
    	v[i] = int(s[i])-96;
    	c[i] = v[i];
    }
    sort(c.begin(), c.end());
    int res = 0;
    for(int i=0; i<n; i++){
    	if(v[i] != c[i]){
    		res++;
    	}
    }
    cout<<res<<endl;	
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