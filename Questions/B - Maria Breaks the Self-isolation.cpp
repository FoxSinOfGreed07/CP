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
    int target = 1;
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
    	if(v[i] <= i+1){
    		target = i + 2;
    	}
    }
    cout<<target<<endl;
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