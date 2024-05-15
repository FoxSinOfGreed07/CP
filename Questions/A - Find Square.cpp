#include <bits/stdc++.h>
using namespace std;

#define int long long int

void FoxSinOfGreedio();

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<string> s(n);
    pair<int, int> tl, br;
    for(int i=0; i<n; i++){
    	cin>>s[i];
    }
    bool flag = false;
    for(int i=0;i<n;i++){
    	for(int j=0; j<m; j++){
    		if(s[i][j] == 'B'){
    			tl.first = i+1;
    			tl.second = j+1;
    			flag = true;
    			break;
    		}
    	}
    	if(flag){
			break;
		}
    }
    flag = false;
    for(int i=n-1;i>=0;i--){
    	for(int j=m-1;j>=0;j--){
    		if(s[i][j] == 'B'){
    			br.first = i+1;
    			br.second = j+1;
    			flag = true;
    			break;
    		}
    	}
    	if(flag){
    		break;
    	}
    }
    cout<<(tl.first + br.first)/2<<" "<<(tl.second + br.second)/2;
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