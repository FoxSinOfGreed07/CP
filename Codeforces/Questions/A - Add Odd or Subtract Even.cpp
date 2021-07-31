#include <bits/stdc++.h>
using namespace std;

#define int long long int

void FoxSinOfGreedio();

void solve()
{
    int a, b, res = 0;
    cin>>a>>b;
    if(a==b){
    	cout<<0<<endl;
    	return;
    } else if(a<b){
    	if((b-a)%2==0){
    		cout<<2<<endl;
    		return;
    	} else{
    		cout<<1<<endl;
    		return;
    	}
    } else{
    	if((a-b)%2==0){
    		cout<<1<<endl;
    		return;
    	} else{
    		cout<<2<<endl;
    		return;
    	}
    }
}

signed main()
{
    FoxSinOfGreedio();
    int T = 1;

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