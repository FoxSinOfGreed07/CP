#include <bits/stdc++.h>
using namespace std;

#define int long long int

void FoxSinOfGreedio();

void solve()
{
    int n, total = 0, available = 0;
    cin>>n;
    vector<int> a(n);
    string res = "YES";
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	if(a[i] < i){
    		if(available >= (i - a[i])){
    			available -= (i - a[i]);
    		} else{
    			res = "NO";
    			break;
    		}
    	} else{
    		available += (a[i] - i);
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