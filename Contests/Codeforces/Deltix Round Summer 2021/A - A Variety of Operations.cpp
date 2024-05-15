#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int a, b;
    cin>>a>>b;
    if(a == 0 and b == 0){
    	cout<<0<<endl;
    	return;
    }
    if(a == b){
    	cout<<1<<endl;
    	return;
    } else if(abs(a-b)%2 == 1){
    	cout<<-1<<endl;
    	return;
    } else{
    	cout<<2<<endl;
    	return;
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