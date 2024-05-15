#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n, t;
    cin>>n>>t;
    vector<pair<int, int> > task(n);
    for(int i=0; i<n; i++){
        pair<int, int> p;
        cin>>p.first>>p.second;
        task[i] = p;
    }

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