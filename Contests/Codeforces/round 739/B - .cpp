#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;
    int diff = 0, tot = 0;
    diff = abs(a - b) -1;
    tot = 2 * diff + 2;
    if( diff < min(a, b) -1  or c > tot ) {
    	cout<<-1<<endl;
    	return;
    }
    
    int res = (c + diff + 1) % tot;
    if(res == 0){
    	res = tot;
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