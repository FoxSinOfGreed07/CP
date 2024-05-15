#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    string res = "NO";
    for(int i=0;i<n;i++){
    	cin>>v[i];
    	if(ceil(sqrt(v[i])) != floor(sqrt(v[i]))){
    		res = "YES";
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