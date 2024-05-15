#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n;
    cin>>n;
    int max = INT_MIN, total = 0;
    double res;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    	if(max < v[i]){
    		max = v[i];
    	}
  		total += v[i];
    }
    total -= max;
    res = max + ((double)total/(double)(n-1));
    cout<<fixed<<setprecision(9)<<res<<endl;
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