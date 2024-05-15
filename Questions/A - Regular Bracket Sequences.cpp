#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"()";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
    	for(int j=0; j<n-1; j++){
    		if(j == i){
    			cout<<"(())";
    		} else{
    			cout<<"()";
    		}
    	}
    	cout<<endl;
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