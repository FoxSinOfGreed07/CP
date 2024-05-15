#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void FoxSinOfGreedio();

void solve()
{
    int n, q, count = 0;
    cin>>n;
    q = n;
    vector<int> v(n);
    map<int, int> m;
    int XOR = 0, curXOR = 0;
    for(int i=0;i<n;i++){
    	cin>>v[i];
    	XOR ^= v[i];
    }
    if(n == 2){
        if(XOR != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(XOR == 0){
    	cout<<"YES"<<endl;
    	return;
    } else{
    	for(int i=0;i<n;i++){
    		curXOR ^= v[i];
            if(curXOR == XOR){
                curXOR = 0;
                count++;
            }
    	}
        if(count >= 3){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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