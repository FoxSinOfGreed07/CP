#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    if( floor(sqrt(n)) == sqrt(n) ){
    	cout<<(int)(sqrt(n))<<" "<<1<<endl;
    	return;
    }
    int lastSquare = (int)(sqrt(n));
    int diff = n - lastSquare*lastSquare;
    if(diff > lastSquare){
    	cout<<lastSquare+1<<" ";
    	cout<<(lastSquare+1)*(lastSquare+1) - n + 1<<endl;
    	return;
    } else{
    	cout<<diff<<" "<<lastSquare+1<<endl;
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